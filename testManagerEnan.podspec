
Pod::Spec.new do |spec|

  spec.name         = "testManagerEnan"
  spec.version      = "0.0.3"
  spec.summary      = "描述summary信息"
  spec.description  = "控制SDK,实用型基类方法"
  spec.homepage     = "https://github.com/iOSQJJ/TestManager"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author             = { "七品官" => "lanmemory@163.com" }
  spec.platform     = :ios, "8.0"
  spec.source       = { :git => "https://github.com/iOSQJJ/TestManager.git", :tag => "#{spec.version}" }

  spec.vendored_frameworks  = "JAWorkBase.framework"
  spec.resource  = "JAPicture.bundle"

  spec.dependency "MJRefresh", "~> 3.1.12"
  spec.dependency "SDWebImage"
  spec.dependency "Masonry"

end
