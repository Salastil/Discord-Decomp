package th;

import android.content.Context;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Properties;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class s {

    /* renamed from: c, reason: collision with root package name */
    public static final a5.m f18566c = new a5.m("AssetPackStorage", 3);

    /* renamed from: d, reason: collision with root package name */
    public static final long f18567d;

    /* renamed from: e, reason: collision with root package name */
    public static final long f18568e;
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final h1 f18569b;

    static {
        TimeUnit timeUnit = TimeUnit.DAYS;
        f18567d = timeUnit.toMillis(14L);
        f18568e = timeUnit.toMillis(28L);
    }

    public s(Context context, h1 h1Var) {
        this.a = context;
        this.f18569b = h1Var;
    }

    public static long b(File file, boolean z5) {
        if (!file.exists()) {
            return -1L;
        }
        ArrayList arrayList = new ArrayList();
        a5.m mVar = f18566c;
        if (z5 && file.listFiles().length > 1) {
            mVar.g("Multiple pack versions found, using highest version code.", new Object[0]);
        }
        try {
            for (File file2 : file.listFiles()) {
                if (!file2.getName().equals("stale.tmp")) {
                    arrayList.add(Long.valueOf(file2.getName()));
                }
            }
        } catch (NumberFormatException e9) {
            mVar.d(e9, "Corrupt asset pack directories.", new Object[0]);
        }
        if (arrayList.isEmpty()) {
            return -1L;
        }
        Collections.sort(arrayList);
        return ((Long) arrayList.get(arrayList.size() - 1)).longValue();
    }

    public static void f(File file) {
        if (file.listFiles() == null || file.listFiles().length <= 1) {
            return;
        }
        long b10 = b(file, false);
        for (File file2 : file.listFiles()) {
            if (!file2.getName().equals(String.valueOf(b10)) && !file2.getName().equals("stale.tmp")) {
                g(file2);
            }
        }
    }

    public static boolean g(File file) {
        File[] listFiles = file.listFiles();
        boolean z5 = true;
        if (listFiles != null) {
            for (File file2 : listFiles) {
                z5 &= g(file2);
            }
        }
        if (file.delete()) {
            return z5;
        }
        return false;
    }

    public final void a(int i5, long j, String str) {
        File file = new File(d(), str);
        if (file.exists()) {
            for (File file2 : file.listFiles()) {
                if (!file2.getName().equals(String.valueOf(i5)) && !file2.getName().equals("stale.tmp")) {
                    g(file2);
                } else if (file2.getName().equals(String.valueOf(i5))) {
                    for (File file3 : file2.listFiles()) {
                        if (!file3.getName().equals(String.valueOf(j))) {
                            g(file3);
                        }
                    }
                }
            }
        }
    }

    public final File c(int i5, long j, String str) {
        return new File(new File(new File(new File(d(), "_tmp"), str), String.valueOf(i5)), String.valueOf(j));
    }

    public final File d() {
        return new File(this.a.getFilesDir(), "assetpacks");
    }

    public final ArrayList e() {
        ArrayList arrayList = new ArrayList();
        try {
            if (d().exists() && d().listFiles() != null) {
                for (File file : d().listFiles()) {
                    if (!file.getCanonicalPath().equals(new File(d(), "_tmp").getCanonicalPath())) {
                        arrayList.add(file);
                    }
                }
            }
            return arrayList;
        } catch (IOException e9) {
            f18566c.b("Could not process directory while scanning installed packs. %s", e9);
            return arrayList;
        }
    }

    public final int h(int i5, long j, String str) {
        File file = new File(new File(c(i5, j, str), "_packs"), "merge.tmp");
        if (!file.exists()) {
            return 0;
        }
        Properties properties = new Properties();
        FileInputStream fileInputStream = new FileInputStream(file);
        try {
            properties.load(fileInputStream);
            fileInputStream.close();
            if (properties.getProperty("numberOfMerges") == null) {
                throw new l0("Merge checkpoint file corrupt.");
            }
            try {
                return Integer.parseInt(properties.getProperty("numberOfMerges"));
            } catch (NumberFormatException e9) {
                throw new l0("Merge checkpoint file corrupt.", e9);
            }
        } catch (Throwable th2) {
            try {
                fileInputStream.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public final v i(String str) {
        String m5 = m(str);
        if (m5 == null) {
            return null;
        }
        File file = new File(m5, "assets");
        if (file.isDirectory()) {
            return new v(0, m5, file.getCanonicalPath());
        }
        f18566c.b("Failed to find assets directory: %s", file);
        return null;
    }

    public final File j(int i5, long j, String str) {
        return new File(new File(new File(d(), str), String.valueOf(i5)), String.valueOf(j));
    }

    public final File k(int i5, String str, long j, String str2) {
        return new File(new File(new File(c(i5, j, str), "_slices"), "_unverified"), str2);
    }

    public final File l(int i5, String str, long j, String str2) {
        return new File(new File(new File(c(i5, j, str), "_slices"), "_verified"), str2);
    }

    public final String m(String str) {
        int length;
        File file = new File(d(), str);
        boolean exists = file.exists();
        a5.m mVar = f18566c;
        if (!exists) {
            mVar.a("Pack not found with pack name: %s", str);
            return null;
        }
        h1 h1Var = this.f18569b;
        File file2 = new File(file, String.valueOf(h1Var.a()));
        if (!file2.exists()) {
            mVar.a("Pack not found with pack name: %s app version: %s", str, Integer.valueOf(h1Var.a()));
            return null;
        }
        File[] listFiles = file2.listFiles();
        if (listFiles == null || (length = listFiles.length) == 0) {
            mVar.a("No pack version found for pack name: %s app version: %s", str, Integer.valueOf(h1Var.a()));
            return null;
        }
        if (length <= 1) {
            return listFiles[0].getCanonicalPath();
        }
        mVar.b("Multiple pack versions found for pack name: %s app version: %s", str, Integer.valueOf(h1Var.a()));
        return null;
    }

    public final HashMap n() {
        HashMap hashMap = new HashMap();
        Iterator it = e().iterator();
        while (it.hasNext()) {
            String name = ((File) it.next()).getName();
            int b10 = (int) b(new File(d(), name), true);
            long b11 = b(new File(new File(d(), name), String.valueOf(b10)), true);
            if (j(b10, b11, name).exists()) {
                hashMap.put(name, Long.valueOf(b11));
            }
        }
        return hashMap;
    }

    public final HashMap o() {
        HashMap hashMap = new HashMap();
        HashMap hashMap2 = new HashMap();
        try {
            Iterator it = e().iterator();
            while (it.hasNext()) {
                File file = (File) it.next();
                v i5 = i(file.getName());
                if (i5 != null) {
                    hashMap2.put(file.getName(), i5);
                }
            }
        } catch (IOException e9) {
            f18566c.b("Could not process directory while scanning installed packs: %s", e9);
        }
        for (String str : hashMap2.keySet()) {
            hashMap.put(str, Long.valueOf(b(new File(new File(d(), str), String.valueOf((int) b(new File(d(), str), true))), true)));
        }
        return hashMap;
    }
}
