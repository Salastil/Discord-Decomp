package d5;

import android.os.SystemClock;
import android.text.TextUtils;
import c5.v;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.DataInputStream;
import java.io.EOFException;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Arrays;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import s4.h;
import th.s;
import th.s0;
import th.u0;
import th.v0;

/* loaded from: classes.dex */
public final class c implements u0 {

    /* renamed from: d, reason: collision with root package name */
    public final int f7426d;

    /* renamed from: e, reason: collision with root package name */
    public long f7427e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f7428i;

    /* renamed from: v, reason: collision with root package name */
    public final Object f7429v;

    public /* synthetic */ c(v0 v0Var, String str, int i5, long j) {
        this.f7428i = v0Var;
        this.f7429v = str;
        this.f7426d = i5;
        this.f7427e = j;
    }

    public static String d(String str) {
        int length = str.length() / 2;
        StringBuilder o6 = k0.d.o(String.valueOf(str.substring(0, length).hashCode()));
        o6.append(String.valueOf(str.substring(length).hashCode()));
        return o6.toString();
    }

    public static int i(com.google.firebase.messaging.d dVar) {
        int read = dVar.read();
        if (read != -1) {
            return read;
        }
        throw new EOFException();
    }

    public static int j(com.google.firebase.messaging.d dVar) {
        return (i(dVar) << 24) | i(dVar) | (i(dVar) << 8) | (i(dVar) << 16);
    }

    public static long k(com.google.firebase.messaging.d dVar) {
        return (i(dVar) & 255) | ((i(dVar) & 255) << 8) | ((i(dVar) & 255) << 16) | ((i(dVar) & 255) << 24) | ((i(dVar) & 255) << 32) | ((i(dVar) & 255) << 40) | ((i(dVar) & 255) << 48) | ((255 & i(dVar)) << 56);
    }

    public static String l(com.google.firebase.messaging.d dVar) {
        return new String(m(dVar, k(dVar)), "UTF-8");
    }

    public static byte[] m(com.google.firebase.messaging.d dVar, long j) {
        long j5 = dVar.f6226e - dVar.f6227i;
        if (j >= 0 && j <= j5) {
            int i5 = (int) j;
            if (i5 == j) {
                byte[] bArr = new byte[i5];
                new DataInputStream(dVar).readFully(bArr);
                return bArr;
            }
        }
        StringBuilder n6 = k0.d.n(j, "streamToBytes length=", ", maxLength=");
        n6.append(j5);
        throw new IOException(n6.toString());
    }

    public static void n(BufferedOutputStream bufferedOutputStream, int i5) {
        bufferedOutputStream.write(i5 & 255);
        bufferedOutputStream.write((i5 >> 8) & 255);
        bufferedOutputStream.write((i5 >> 16) & 255);
        bufferedOutputStream.write((i5 >> 24) & 255);
    }

    public static void o(BufferedOutputStream bufferedOutputStream, long j) {
        bufferedOutputStream.write((byte) j);
        bufferedOutputStream.write((byte) (j >>> 8));
        bufferedOutputStream.write((byte) (j >>> 16));
        bufferedOutputStream.write((byte) (j >>> 24));
        bufferedOutputStream.write((byte) (j >>> 32));
        bufferedOutputStream.write((byte) (j >>> 40));
        bufferedOutputStream.write((byte) (j >>> 48));
        bufferedOutputStream.write((byte) (j >>> 56));
    }

    public static void p(BufferedOutputStream bufferedOutputStream, String str) {
        byte[] bytes = str.getBytes("UTF-8");
        o(bufferedOutputStream, bytes.length);
        bufferedOutputStream.write(bytes, 0, bytes.length);
    }

    @Override // th.u0
    public Object a() {
        int i5;
        v0 v0Var = (v0) this.f7428i;
        String str = (String) this.f7429v;
        long j = this.f7427e;
        List asList = Arrays.asList(str);
        v0Var.getClass();
        s0 s0Var = (s0) ((Map) v0Var.b(new e4.e(22, v0Var, asList))).get(str);
        if (s0Var == null || (i5 = s0Var.f18571c.f18561d) == 5 || i5 == 6 || i5 == 4) {
            v0.f18598g.b(h.f("Could not find pack ", str, " while trying to complete it"), new Object[0]);
        }
        s sVar = v0Var.a;
        int i6 = this.f7426d;
        if (sVar.c(i6, j, str).exists()) {
            s.g(sVar.c(i6, j, str));
        }
        s0Var.f18571c.f18561d = 4;
        return null;
    }

    public synchronized c5.b b(String str) {
        b bVar = (b) ((LinkedHashMap) this.f7428i).get(str);
        if (bVar == null) {
            return null;
        }
        File c6 = c(str);
        try {
            com.google.firebase.messaging.d dVar = new com.google.firebase.messaging.d(new BufferedInputStream(new FileInputStream(c6)), c6.length());
            try {
                b a = b.a(dVar);
                if (TextUtils.equals(str, a.f7419b)) {
                    return bVar.b(m(dVar, dVar.f6226e - dVar.f6227i));
                }
                v.b("%s: key=%s, found=%s", c6.getAbsolutePath(), str, a.f7419b);
                b bVar2 = (b) ((LinkedHashMap) this.f7428i).remove(str);
                if (bVar2 != null) {
                    this.f7427e -= bVar2.a;
                }
                return null;
            } finally {
                dVar.close();
            }
        } catch (IOException e9) {
            v.b("%s: %s", c6.getAbsolutePath(), e9.toString());
            synchronized (this) {
                boolean delete = c(str).delete();
                b bVar3 = (b) ((LinkedHashMap) this.f7428i).remove(str);
                if (bVar3 != null) {
                    this.f7427e -= bVar3.a;
                }
                if (!delete) {
                    v.b("Could not delete cache entry for key=%s, filename=%s", str, d(str));
                }
                return null;
            }
        }
    }

    public File c(String str) {
        return new File(((io.sentry.internal.debugmeta.c) this.f7429v).I(), d(str));
    }

    public synchronized void e() {
        File I = ((io.sentry.internal.debugmeta.c) this.f7429v).I();
        if (!I.exists()) {
            if (!I.mkdirs()) {
                v.c("Unable to create cache dir %s", I.getAbsolutePath());
            }
            return;
        }
        File[] listFiles = I.listFiles();
        if (listFiles == null) {
            return;
        }
        for (File file : listFiles) {
            try {
                long length = file.length();
                com.google.firebase.messaging.d dVar = new com.google.firebase.messaging.d(new BufferedInputStream(new FileInputStream(file)), length);
                try {
                    b a = b.a(dVar);
                    a.a = length;
                    h(a.f7419b, a);
                    dVar.close();
                } catch (Throwable th2) {
                    dVar.close();
                    throw th2;
                }
            } catch (IOException unused) {
                file.delete();
            }
        }
    }

    public void f() {
        long j = this.f7427e;
        int i5 = this.f7426d;
        if (j < i5) {
            return;
        }
        int i6 = 0;
        if (v.a) {
            v.d("Pruning old cache entries.", new Object[0]);
        }
        long j5 = this.f7427e;
        long elapsedRealtime = SystemClock.elapsedRealtime();
        Iterator it = ((LinkedHashMap) this.f7428i).entrySet().iterator();
        while (it.hasNext()) {
            b bVar = (b) ((Map.Entry) it.next()).getValue();
            if (c(bVar.f7419b).delete()) {
                this.f7427e -= bVar.a;
            } else {
                String str = bVar.f7419b;
                v.b("Could not delete cache entry for key=%s, filename=%s", str, d(str));
            }
            it.remove();
            i6++;
            if (this.f7427e < i5 * 0.9f) {
                break;
            }
        }
        if (v.a) {
            v.d("pruned %d files, %d bytes, %d ms", Integer.valueOf(i6), Long.valueOf(this.f7427e - j5), Long.valueOf(SystemClock.elapsedRealtime() - elapsedRealtime));
        }
    }

    public synchronized void g(String str, c5.b bVar) {
        BufferedOutputStream bufferedOutputStream;
        b bVar2;
        long j = this.f7427e;
        byte[] bArr = bVar.a;
        long length = j + bArr.length;
        int i5 = this.f7426d;
        if (length <= i5 || bArr.length <= i5 * 0.9f) {
            File c6 = c(str);
            try {
                bufferedOutputStream = new BufferedOutputStream(new FileOutputStream(c6));
                bVar2 = new b(str, bVar);
            } catch (IOException unused) {
                if (!c6.delete()) {
                    v.b("Could not clean up file %s", c6.getAbsolutePath());
                }
                if (!((io.sentry.internal.debugmeta.c) this.f7429v).I().exists()) {
                    v.b("Re-initializing cache after external clearing.", new Object[0]);
                    ((LinkedHashMap) this.f7428i).clear();
                    this.f7427e = 0L;
                    e();
                }
            }
            if (!bVar2.c(bufferedOutputStream)) {
                bufferedOutputStream.close();
                v.b("Failed to write header for %s", c6.getAbsolutePath());
                throw new IOException();
            }
            bufferedOutputStream.write(bVar.a);
            bufferedOutputStream.close();
            bVar2.a = c6.length();
            h(str, bVar2);
            f();
        }
    }

    public void h(String str, b bVar) {
        LinkedHashMap linkedHashMap = (LinkedHashMap) this.f7428i;
        if (linkedHashMap.containsKey(str)) {
            this.f7427e = (bVar.a - ((b) linkedHashMap.get(str)).a) + this.f7427e;
        } else {
            this.f7427e += bVar.a;
        }
        linkedHashMap.put(str, bVar);
    }

    public c(io.sentry.internal.debugmeta.c cVar) {
        this.f7428i = new LinkedHashMap(16, 0.75f, true);
        this.f7427e = 0L;
        this.f7429v = cVar;
        this.f7426d = 5242880;
    }
}
