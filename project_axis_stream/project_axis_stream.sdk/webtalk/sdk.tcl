webtalk_init -webtalk_dir A:\\FYP\\HLSTutorials\\project_axis_stream\\project_axis_stream.sdk\\webtalk
webtalk_register_client -client project
webtalk_add_data -client project -key date_generated -value "Wed Mar 29 13:16:59 2017" -context "software_version_and_target_device"
webtalk_add_data -client project -key product_version -value "SDK v2014.2" -context "software_version_and_target_device"
webtalk_add_data -client project -key build_version -value "2014.2" -context "software_version_and_target_device"
webtalk_add_data -client project -key os_platform -value "amd64" -context "software_version_and_target_device"
webtalk_add_data -client project -key registration_id -value "176453893_200471044_210637353_003" -context "software_version_and_target_device"
webtalk_add_data -client project -key tool_flow -value "SDK" -context "software_version_and_target_device"
webtalk_add_data -client project -key beta -value "false" -context "software_version_and_target_device"
webtalk_add_data -client project -key route_design -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_family -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_device -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_package -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key target_speed -value "NA" -context "software_version_and_target_device"
webtalk_add_data -client project -key random_id -value "jaclb1a7t5fq8jent16oi03uu9" -context "software_version_and_target_device"
webtalk_add_data -client project -key project_id -value "2014.2_2" -context "software_version_and_target_device"
webtalk_add_data -client project -key project_iteration -value "2" -context "software_version_and_target_device"
webtalk_add_data -client project -key os_name -value "Microsoft Windows 7 , 64-bit" -context "user_environment"
webtalk_add_data -client project -key os_release -value "Service Pack 1  (build 7601)" -context "user_environment"
webtalk_add_data -client project -key cpu_name -value "Intel(R) Core(TM) i3-2310M CPU @ 2.10GHz" -context "user_environment"
webtalk_add_data -client project -key cpu_speed -value "2095 MHz" -context "user_environment"
webtalk_add_data -client project -key total_processors -value "1" -context "user_environment"
webtalk_add_data -client project -key system_ram -value "6.000 GB" -context "user_environment"
webtalk_register_client -client sdk
webtalk_add_data -client sdk -key uid -value "1490772689753" -context "sdk\\\\bsp/1490772689753"
webtalk_add_data -client sdk -key hwid -value "1490689265146" -context "sdk\\\\bsp/1490772689753"
webtalk_add_data -client sdk -key os -value "standalone" -context "sdk\\\\bsp/1490772689753"
webtalk_add_data -client sdk -key apptemplate -value "hello_world" -context "sdk\\\\bsp/1490772689753"
webtalk_add_data -client sdk -key uid -value "1490772699370" -context "sdk\\\\application/1490772699370"
webtalk_add_data -client sdk -key hwid -value "1490689265146" -context "sdk\\\\application/1490772699370"
webtalk_add_data -client sdk -key bspid -value "1490772689753" -context "sdk\\\\application/1490772699370"
webtalk_add_data -client sdk -key newbsp -value "true" -context "sdk\\\\application/1490772699370"
webtalk_add_data -client sdk -key os -value "standalone" -context "sdk\\\\application/1490772699370"
webtalk_add_data -client sdk -key apptemplate -value "hello_world" -context "sdk\\\\application/1490772699370"
webtalk_transmit -clientid 2656001592 -regid "176453893_200471044_210637353_003" -xml A:\\FYP\\HLSTutorials\\project_axis_stream\\project_axis_stream.sdk\\webtalk\\usage_statistics_ext_sdk.xml -html A:\\FYP\\HLSTutorials\\project_axis_stream\\project_axis_stream.sdk\\webtalk\\usage_statistics_ext_sdk.html -wdm A:\\FYP\\HLSTutorials\\project_axis_stream\\project_axis_stream.sdk\\webtalk\\sdk.wdm -intro "<H3>SDK Usage Report</H3><BR>"
webtalk_terminate
