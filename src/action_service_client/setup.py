from setuptools import setup

package_name = 'action_service_client'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    #==========================================================
    install_requires=['setuptools','rclpy', 'GetDistance.srv'],
    #==========================================================
    zip_safe=True,
    maintainer='max',
    maintainer_email='you@example.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            #==========================================================================
            'squares_action_server = action_service_client.action_service:main',
            'squares_action_client = action_service_client.action_client:main',
            #==========================================================================
        ],
    },
)
