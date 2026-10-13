package os;

import a3.e;
import is.c;
import java.io.ByteArrayInputStream;
import java.io.DataInputStream;
import java.io.EOFException;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.io.ObjectInputStream;
import java.net.URI;
import java.net.URL;
import java.net.URLConnection;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Set;
import net.time4j.tz.j;
import net.time4j.tz.o;
import net.time4j.w0;
import s4.h;

/* loaded from: classes3.dex */
public final class a implements o, ns.a {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f16240b;

    /* renamed from: c, reason: collision with root package name */
    public final Map f16241c;

    /* renamed from: d, reason: collision with root package name */
    public final Map f16242d;

    /* renamed from: e, reason: collision with root package name */
    public final w0 f16243e;

    /* renamed from: f, reason: collision with root package name */
    public final Map f16244f;

    /* JADX WARN: Removed duplicated region for block: B:46:0x01e3  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x01f6  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x01dd A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:57:0x01fa A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public a() {
        InputStream inputStream;
        String str;
        IllegalStateException illegalStateException;
        URI c6;
        InputStream inputStream2;
        String str2 = "";
        w0 w0Var = (w0) w0.W.f13688y;
        HashMap hashMap = new HashMap();
        HashMap hashMap2 = new HashMap();
        boolean z5 = System.getProperty("net.time4j.scale.leapseconds.path") != null;
        if (z5) {
            this.f16244f = Collections.EMPTY_MAP;
        } else {
            this.f16244f = new LinkedHashMap(50);
        }
        String property = System.getProperty("net.time4j.tz.repository.path");
        String property2 = System.getProperty("net.time4j.tz.repository.version");
        String f2 = property2 == null ? "tzdata.repository" : h.f("tzdata", property2, ".repository");
        try {
            String str3 = "tzrepo/" + f2;
            if (property != null) {
                File file = new File(property, f2);
                if (!file.isAbsolute()) {
                    c6 = c.f12272b.c("tzdata", file.toString(), e());
                } else {
                    if (!file.exists()) {
                        throw new FileNotFoundException("Path to tz-repository not found: " + file);
                    }
                    c6 = file.toURI();
                }
            } else {
                c6 = c.f12272b.c("tzdata", str3, e());
            }
            if (c6 != null) {
                inputStream2 = c.f12272b.b(c6);
                try {
                    try {
                        str = c6.toString();
                    } catch (Throwable th2) {
                        th = th2;
                        inputStream = inputStream2;
                        if (inputStream != null) {
                        }
                        throw th;
                    }
                } catch (IOException e9) {
                    e = e9;
                    str = "";
                    inputStream = inputStream2;
                    try {
                        IllegalStateException illegalStateException2 = new IllegalStateException("[ERROR] TZ-repository not available. => " + e.getMessage(), e);
                        if (inputStream != null) {
                        }
                        illegalStateException = illegalStateException2;
                        if (illegalStateException != null) {
                        }
                    } catch (Throwable th3) {
                        th = th3;
                        if (inputStream != null) {
                            try {
                                inputStream.close();
                            } catch (IOException unused) {
                            }
                        }
                        throw th;
                    }
                }
            } else {
                str = "";
                inputStream2 = null;
            }
            if (inputStream2 == null) {
                try {
                    URL resource = e().getClassLoader().getResource(str3);
                    if (resource == null) {
                        throw new FileNotFoundException("Classloader cannot access tz-repository: " + str3);
                    }
                    URLConnection openConnection = resource.openConnection();
                    openConnection.setUseCaches(false);
                    openConnection.connect();
                    inputStream2 = openConnection.getInputStream();
                    str = resource.toString();
                } catch (IOException e10) {
                    e = e10;
                    inputStream = inputStream2;
                    IllegalStateException illegalStateException22 = new IllegalStateException("[ERROR] TZ-repository not available. => " + e.getMessage(), e);
                    if (inputStream != null) {
                    }
                    illegalStateException = illegalStateException22;
                    if (illegalStateException != null) {
                    }
                }
            }
            try {
                DataInputStream dataInputStream = new DataInputStream(inputStream2);
                d(dataInputStream, str);
                String readUTF = dataInputStream.readUTF();
                int readInt = dataInputStream.readInt();
                ArrayList arrayList = new ArrayList(readInt);
                int i5 = 0;
                while (i5 < readInt) {
                    String readUTF2 = dataInputStream.readUTF();
                    int readInt2 = dataInputStream.readInt();
                    byte[] bArr = new byte[readInt2];
                    String str4 = str;
                    String str5 = readUTF;
                    int i6 = 0;
                    do {
                        try {
                            i6 += dataInputStream.read(bArr, i6, readInt2 - i6);
                            if (i6 == -1) {
                                throw new EOFException("Incomplete data: " + readUTF2);
                            }
                        } catch (IOException e11) {
                            e = e11;
                            inputStream = inputStream2;
                            str = str4;
                            IllegalStateException illegalStateException222 = new IllegalStateException("[ERROR] TZ-repository not available. => " + e.getMessage(), e);
                            if (inputStream != null) {
                                try {
                                    inputStream.close();
                                } catch (IOException unused2) {
                                }
                            }
                            illegalStateException = illegalStateException222;
                            if (illegalStateException != null) {
                            }
                        }
                    } while (readInt2 > i6);
                    arrayList.add(readUTF2);
                    hashMap.put(readUTF2, bArr);
                    i5++;
                    str = str4;
                    readUTF = str5;
                }
                String str6 = str;
                String str7 = readUTF;
                short readShort = dataInputStream.readShort();
                for (int i10 = 0; i10 < readShort; i10++) {
                    hashMap2.put(dataInputStream.readUTF(), (String) arrayList.get(dataInputStream.readShort()));
                }
                if (!z5) {
                    short readShort2 = dataInputStream.readShort();
                    for (int i11 = 0; i11 < readShort2; i11++) {
                        this.f16244f.put(w0.z(dataInputStream.readShort(), dataInputStream.readByte(), dataInputStream.readByte(), true), Integer.valueOf(dataInputStream.readByte()));
                    }
                    w0Var = w0.z(dataInputStream.readShort(), dataInputStream.readByte(), dataInputStream.readByte(), true);
                }
                if (inputStream2 != null) {
                    try {
                        inputStream2.close();
                    } catch (IOException unused3) {
                    }
                }
                str = str6;
                str2 = str7;
                illegalStateException = null;
            } catch (IOException e12) {
                e = e12;
                inputStream = inputStream2;
                IllegalStateException illegalStateException2222 = new IllegalStateException("[ERROR] TZ-repository not available. => " + e.getMessage(), e);
                if (inputStream != null) {
                }
                illegalStateException = illegalStateException2222;
                if (illegalStateException != null) {
                }
            }
        } catch (IOException e13) {
            e = e13;
            str = "";
            inputStream = null;
        } catch (Throwable th4) {
            th = th4;
            inputStream = null;
        }
        if (illegalStateException != null) {
            throw illegalStateException;
        }
        this.a = str2;
        this.f16240b = str;
        this.f16241c = Collections.unmodifiableMap(hashMap);
        this.f16242d = Collections.unmodifiableMap(hashMap2);
        this.f16243e = w0Var;
    }

    public static void d(DataInputStream dataInputStream, String str) {
        byte readByte = dataInputStream.readByte();
        byte readByte2 = dataInputStream.readByte();
        byte readByte3 = dataInputStream.readByte();
        byte readByte4 = dataInputStream.readByte();
        byte readByte5 = dataInputStream.readByte();
        byte readByte6 = dataInputStream.readByte();
        if (readByte != 116 || readByte2 != 122 || readByte3 != 114 || readByte4 != 101 || readByte5 != 112 || readByte6 != 111) {
            throw new IOException(e.k("Invalid tz-repository: ", str));
        }
    }

    public static Class e() {
        if (!Boolean.getBoolean("test.environment")) {
            return a.class;
        }
        try {
            return Class.forName("net.time4j.tz.spi.RepositoryTest");
        } catch (ClassNotFoundException e9) {
            throw new AssertionError(e9);
        }
    }

    @Override // net.time4j.tz.o
    public final Set a() {
        return this.f16241c.keySet();
    }

    @Override // net.time4j.tz.o
    public final Map b() {
        return this.f16242d;
    }

    @Override // net.time4j.tz.o
    public final String c() {
        return this.f16240b;
    }

    @Override // net.time4j.tz.o
    public final String getName() {
        return "TZDB";
    }

    @Override // net.time4j.tz.o
    public final String getVersion() {
        return this.a;
    }

    @Override // net.time4j.tz.o
    public final j load(String str) {
        try {
            byte[] bArr = (byte[]) this.f16241c.get(str);
            if (bArr != null) {
                return (j) new ObjectInputStream(new ByteArrayInputStream(bArr)).readObject();
            }
            return null;
        } catch (IOException e9) {
            e9.printStackTrace();
            return null;
        } catch (ClassNotFoundException e10) {
            e10.printStackTrace();
            return null;
        }
    }

    public final String toString() {
        return com.discord.chat.bridge.botuikit.a.j(new StringBuilder("TZ-REPOSITORY("), this.a, ")");
    }
}
