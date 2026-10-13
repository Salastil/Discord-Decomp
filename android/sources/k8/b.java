package k8;

import a5.h0;
import android.os.Environment;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.concurrent.TimeUnit;
import k2.r;
import w3.q;

/* loaded from: classes3.dex */
public final class b implements e {

    /* renamed from: f, reason: collision with root package name */
    public static final long f13200f = TimeUnit.MINUTES.toMillis(30);

    /* renamed from: g, reason: collision with root package name */
    public static final /* synthetic */ int f13201g = 0;
    public final File a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f13202b;

    /* renamed from: c, reason: collision with root package name */
    public final File f13203c;

    /* renamed from: d, reason: collision with root package name */
    public final j8.b f13204d;

    /* renamed from: e, reason: collision with root package name */
    public final v8.c f13205e;

    /* JADX WARN: Can't wrap try/catch for region: R(12:0|1|2|3|(3:5|6|7)|11|(4:13|(1:15)|16|17)|19|20|16|17|(1:(1:10))) */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x0049, code lost:
    
        r4 = r2.f13204d;
        java.util.Objects.toString(r3);
        r4.getClass();
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public b(File file, int i5, j8.b bVar) {
        this.a = file;
        boolean z5 = false;
        try {
            File externalStorageDirectory = Environment.getExternalStorageDirectory();
            if (externalStorageDirectory != null) {
                try {
                    z5 = file.getCanonicalPath().contains(externalStorageDirectory.toString());
                } catch (IOException unused) {
                    bVar.getClass();
                }
            }
        } catch (Exception unused2) {
            bVar.getClass();
        }
        this.f13202b = z5;
        File file2 = new File(this.a, k0.d.i(i5, "v2.ols100."));
        this.f13203c = file2;
        this.f13204d = bVar;
        File file3 = this.a;
        if (file3.exists()) {
            if (!file2.exists()) {
                tn.g.h(file3);
            }
            this.f13205e = v8.c.a;
        }
        q.r(file2);
        this.f13205e = v8.c.a;
    }

    public static j h(File file, b bVar) {
        j jVar;
        String name = file.getName();
        int lastIndexOf = name.lastIndexOf(46);
        if (lastIndexOf > 0) {
            String substring = name.substring(lastIndexOf);
            String str = ".cnt".equals(substring) ? ".cnt" : ".tmp".equals(substring) ? ".tmp" : null;
            if (str != null) {
                String substring2 = name.substring(0, lastIndexOf);
                if (str.equals(".tmp")) {
                    int lastIndexOf2 = substring2.lastIndexOf(46);
                    if (lastIndexOf2 > 0) {
                        substring2 = substring2.substring(0, lastIndexOf2);
                    }
                }
                jVar = new j(str, substring2);
                if (jVar != null && new File(bVar.j((String) jVar.f13232i)).equals(file.getParentFile())) {
                    return jVar;
                }
                return null;
            }
        }
        jVar = null;
        if (jVar != null) {
            return jVar;
        }
        return null;
    }

    @Override // k8.e
    public final i8.a a(Object obj, String str) {
        File i5 = i(str);
        if (!i5.exists()) {
            return null;
        }
        this.f13205e.getClass();
        i5.setLastModified(System.currentTimeMillis());
        return new i8.a(i5);
    }

    @Override // k8.e
    public final void b() {
        tn.g.D(this.a, new h0(6, this));
    }

    @Override // k8.e
    public final Collection c() {
        j jVar = new j(this);
        tn.g.D(this.f13203c, jVar);
        return Collections.unmodifiableList((ArrayList) jVar.f13231e);
    }

    @Override // k8.e
    public final long d(a aVar) {
        File file = aVar.f13197b.a;
        if (!file.exists()) {
            return 0L;
        }
        long length = file.length();
        if (file.delete()) {
            return length;
        }
        return -1L;
    }

    @Override // k8.e
    public final void e() {
        File[] listFiles = this.a.listFiles();
        if (listFiles != null) {
            for (File file : listFiles) {
                tn.g.h(file);
            }
        }
    }

    @Override // k8.e
    public final r f(Object obj, String str) {
        File file = new File(j(str));
        boolean exists = file.exists();
        j8.b bVar = this.f13204d;
        if (!exists) {
            try {
                q.r(file);
            } catch (n8.b e9) {
                bVar.getClass();
                throw e9;
            }
        }
        try {
            return new r(this, str, File.createTempFile(str.concat("."), ".tmp", file));
        } catch (IOException e10) {
            bVar.getClass();
            throw e10;
        }
    }

    @Override // k8.e
    public final boolean g(Object obj, String str) {
        return i(str).exists();
    }

    public final File i(String str) {
        return new File(a3.e.n(k0.d.o(j(str)), File.separator, str, ".cnt"));
    }

    @Override // k8.e
    public final boolean isExternal() {
        return this.f13202b;
    }

    public final String j(String str) {
        String valueOf = String.valueOf(Math.abs(str.hashCode() % 100));
        StringBuilder sb2 = new StringBuilder();
        sb2.append(this.f13203c);
        return com.discord.chat.bridge.botuikit.a.j(sb2, File.separator, valueOf);
    }

    @Override // k8.e
    public final long remove(String str) {
        File i5 = i(str);
        if (!i5.exists()) {
            return 0L;
        }
        long length = i5.length();
        if (i5.delete()) {
            return length;
        }
        return -1L;
    }
}
