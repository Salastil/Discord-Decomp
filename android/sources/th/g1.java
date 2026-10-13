package th;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Properties;

/* loaded from: classes3.dex */
public final class g1 {

    /* renamed from: c, reason: collision with root package name */
    public static final a5.m f18459c = new a5.m("PackMetadataManager", 3);
    public final s a;

    /* renamed from: b, reason: collision with root package name */
    public final h1 f18460b;

    public g1(s sVar, h1 h1Var) {
        this.a = sVar;
        this.f18460b = h1Var;
    }

    public final String a(String str) {
        s sVar = this.a;
        sVar.getClass();
        try {
            if (sVar.m(str) != null) {
                int a = this.f18460b.a();
                File file = new File(new File(sVar.j(a, s.b(new File(new File(sVar.d(), str), String.valueOf((int) s.b(new File(sVar.d(), str), true))), true), str), "_metadata"), "properties.dat");
                try {
                    if (!file.exists()) {
                        return String.valueOf(a);
                    }
                    FileInputStream fileInputStream = new FileInputStream(file);
                    try {
                        Properties properties = new Properties();
                        properties.load(fileInputStream);
                        fileInputStream.close();
                        String property = properties.getProperty("moduleVersionTag");
                        return property == null ? String.valueOf(a) : property;
                    } finally {
                    }
                } catch (IOException unused) {
                    f18459c.b("Failed to read pack version tag for pack %s", str);
                }
            }
        } catch (IOException unused2) {
        }
        return "";
    }

    public final void b(int i5, String str, long j, String str2) {
        if (str2 == null || str2.isEmpty()) {
            str2 = String.valueOf(i5);
        }
        Properties properties = new Properties();
        properties.put("moduleVersionTag", str2);
        s sVar = this.a;
        sVar.getClass();
        File file = new File(new File(sVar.j(i5, j, str), "_metadata"), "properties.dat");
        file.getParentFile().mkdirs();
        file.createNewFile();
        FileOutputStream fileOutputStream = new FileOutputStream(file);
        try {
            properties.store(fileOutputStream, (String) null);
            fileOutputStream.close();
        } catch (Throwable th2) {
            try {
                fileOutputStream.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }
}
