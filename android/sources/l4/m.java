package l4;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Typeface;
import android.util.Base64;
import androidx.recyclerview.widget.RecyclerView;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.Callable;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.zip.GZIPInputStream;
import java.util.zip.ZipEntry;
import java.util.zip.ZipInputStream;

/* loaded from: classes.dex */
public abstract class m {
    public static final HashMap a = new HashMap();

    /* renamed from: b, reason: collision with root package name */
    public static final HashSet f13765b = new HashSet();

    /* renamed from: c, reason: collision with root package name */
    public static final byte[] f13766c = {80, 75, 3, 4};

    /* renamed from: d, reason: collision with root package name */
    public static final byte[] f13767d = {31, -117, 8};

    public static c0 a(final String str, Callable callable, Runnable runnable) {
        i a10 = str == null ? null : q4.g.f16682b.a(str);
        c0 c0Var = a10 != null ? new c0(a10) : null;
        HashMap hashMap = a;
        if (str != null && hashMap.containsKey(str)) {
            c0Var = (c0) hashMap.get(str);
        }
        if (c0Var != null) {
            if (runnable != null) {
                runnable.run();
            }
            return c0Var;
        }
        c0 c0Var2 = new c0(callable, false);
        if (str != null) {
            final AtomicBoolean atomicBoolean = new AtomicBoolean(false);
            final int i5 = 0;
            c0Var2.b(new y() { // from class: l4.k
                @Override // l4.y
                public final void onResult(Object obj) {
                    switch (i5) {
                        case 0:
                            HashMap hashMap2 = m.a;
                            hashMap2.remove(str);
                            atomicBoolean.set(true);
                            if (hashMap2.size() == 0) {
                                m.i();
                                break;
                            }
                            break;
                        default:
                            HashMap hashMap3 = m.a;
                            hashMap3.remove(str);
                            atomicBoolean.set(true);
                            if (hashMap3.size() == 0) {
                                m.i();
                                break;
                            }
                            break;
                    }
                }
            });
            final int i6 = 1;
            c0Var2.a(new y() { // from class: l4.k
                @Override // l4.y
                public final void onResult(Object obj) {
                    switch (i6) {
                        case 0:
                            HashMap hashMap2 = m.a;
                            hashMap2.remove(str);
                            atomicBoolean.set(true);
                            if (hashMap2.size() == 0) {
                                m.i();
                                break;
                            }
                            break;
                        default:
                            HashMap hashMap3 = m.a;
                            hashMap3.remove(str);
                            atomicBoolean.set(true);
                            if (hashMap3.size() == 0) {
                                m.i();
                                break;
                            }
                            break;
                    }
                }
            });
            if (!atomicBoolean.get()) {
                hashMap.put(str, c0Var2);
                if (hashMap.size() == 1) {
                    i();
                }
            }
        }
        return c0Var2;
    }

    public static a0 b(Context context, String str, String str2) {
        i a10 = str2 == null ? null : q4.g.f16682b.a(str2);
        if (a10 != null) {
            return new a0(a10);
        }
        try {
            et.r d6 = et.y.d(et.y.m(context.getAssets().open(str)));
            int i5 = 1;
            if (h(d6, f13766c).booleanValue()) {
                return f(context, new ZipInputStream(new et.f(d6, i5)), str2);
            }
            if (h(d6, f13767d).booleanValue()) {
                return c(new GZIPInputStream(new et.f(d6, i5)), str2);
            }
            String[] strArr = w4.a.f19679w;
            return d(new w4.b(d6), str2, true);
        } catch (IOException e9) {
            return new a0(e9);
        }
    }

    public static a0 c(InputStream inputStream, String str) {
        et.r d6 = et.y.d(et.y.m(inputStream));
        String[] strArr = w4.a.f19679w;
        return d(new w4.b(d6), str, true);
    }

    public static a0 d(w4.b bVar, String str, boolean z5) {
        i a10;
        try {
            if (str == null) {
                a10 = null;
            } else {
                try {
                    a10 = q4.g.f16682b.a(str);
                } catch (Exception e9) {
                    a0 a0Var = new a0(e9);
                    if (z5) {
                        x4.h.b(bVar);
                    }
                    return a0Var;
                }
            }
            if (a10 != null) {
                a0 a0Var2 = new a0(a10);
                if (z5) {
                    x4.h.b(bVar);
                }
                return a0Var2;
            }
            i a11 = v4.r.a(bVar);
            if (str != null) {
                q4.g.f16682b.a.b(str, a11);
            }
            a0 a0Var3 = new a0(a11);
            if (z5) {
                x4.h.b(bVar);
            }
            return a0Var3;
        } catch (Throwable th2) {
            if (z5) {
                x4.h.b(bVar);
            }
            throw th2;
        }
    }

    public static a0 e(Context context, String str, int i5) {
        i a10 = str == null ? null : q4.g.f16682b.a(str);
        if (a10 != null) {
            return new a0(a10);
        }
        try {
            et.r d6 = et.y.d(et.y.m(context.getResources().openRawResource(i5)));
            int i6 = 1;
            if (h(d6, f13766c).booleanValue()) {
                return f(context, new ZipInputStream(new et.f(d6, i6)), str);
            }
            if (!h(d6, f13767d).booleanValue()) {
                String[] strArr = w4.a.f19679w;
                return d(new w4.b(d6), str, true);
            }
            try {
                return c(new GZIPInputStream(new et.f(d6, i6)), str);
            } catch (IOException e9) {
                return new a0(e9);
            }
        } catch (Resources.NotFoundException e10) {
            return new a0(e10);
        }
    }

    public static a0 f(Context context, ZipInputStream zipInputStream, String str) {
        try {
            return g(context, zipInputStream, str);
        } finally {
            x4.h.b(zipInputStream);
        }
    }

    public static a0 g(Context context, ZipInputStream zipInputStream, String str) {
        i a10;
        x xVar;
        HashMap hashMap = new HashMap();
        HashMap hashMap2 = new HashMap();
        if (str == null) {
            a10 = null;
        } else {
            try {
                a10 = q4.g.f16682b.a(str);
            } catch (IOException e9) {
                return new a0(e9);
            }
        }
        if (a10 != null) {
            return new a0(a10);
        }
        ZipEntry nextEntry = zipInputStream.getNextEntry();
        i iVar = null;
        while (nextEntry != null) {
            String name = nextEntry.getName();
            if (name.contains("__MACOSX")) {
                zipInputStream.closeEntry();
            } else if (nextEntry.getName().equalsIgnoreCase("manifest.json")) {
                zipInputStream.closeEntry();
            } else if (nextEntry.getName().contains(".json")) {
                et.r d6 = et.y.d(et.y.m(zipInputStream));
                String[] strArr = w4.a.f19679w;
                iVar = d(new w4.b(d6), null, false).a;
            } else {
                if (!name.contains(".png") && !name.contains(".webp") && !name.contains(".jpg") && !name.contains(".jpeg")) {
                    if (!name.contains(".ttf") && !name.contains(".otf")) {
                        zipInputStream.closeEntry();
                    }
                    String[] split = name.split("/");
                    String str2 = split[split.length - 1];
                    String str3 = str2.split("\\.")[0];
                    if (context == null) {
                        return new a0(new IllegalStateException("Unable to extract font " + str3 + " please pass a non-null Context parameter"));
                    }
                    File file = new File(context.getCacheDir(), str2);
                    try {
                        FileOutputStream fileOutputStream = new FileOutputStream(file);
                        try {
                            FileOutputStream fileOutputStream2 = new FileOutputStream(file);
                            try {
                                byte[] bArr = new byte[RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT];
                                while (true) {
                                    int read = zipInputStream.read(bArr);
                                    if (read == -1) {
                                        break;
                                    }
                                    fileOutputStream2.write(bArr, 0, read);
                                }
                                fileOutputStream2.flush();
                                fileOutputStream2.close();
                                fileOutputStream.close();
                            } catch (Throwable th2) {
                                try {
                                    fileOutputStream2.close();
                                } catch (Throwable th3) {
                                    th2.addSuppressed(th3);
                                }
                                throw th2;
                            }
                        } finally {
                        }
                    } catch (Throwable th4) {
                        x4.c.c("Unable to save font " + str3 + " to the temporary file: " + str2 + ". ", th4);
                    }
                    Typeface createFromFile = Typeface.createFromFile(file);
                    if (!file.delete()) {
                        x4.c.b("Failed to delete temp font file " + file.getAbsolutePath() + ".");
                    }
                    hashMap2.put(str3, createFromFile);
                }
                String[] split2 = name.split("/");
                hashMap.put(split2[split2.length - 1], BitmapFactory.decodeStream(zipInputStream));
            }
            nextEntry = zipInputStream.getNextEntry();
        }
        if (iVar == null) {
            return new a0(new IllegalArgumentException("Unable to parse composition"));
        }
        for (Map.Entry entry : hashMap.entrySet()) {
            String str4 = (String) entry.getKey();
            Iterator it = ((HashMap) iVar.c()).values().iterator();
            while (true) {
                if (!it.hasNext()) {
                    xVar = null;
                    break;
                }
                xVar = (x) it.next();
                if (xVar.f13809d.equals(str4)) {
                    break;
                }
            }
            if (xVar != null) {
                xVar.f13811f = x4.h.d(xVar.a, xVar.f13807b, (Bitmap) entry.getValue());
            }
        }
        for (Map.Entry entry2 : hashMap2.entrySet()) {
            boolean z5 = false;
            for (q4.c cVar : iVar.f13746f.values()) {
                if (cVar.a.equals(entry2.getKey())) {
                    cVar.f16675d = (Typeface) entry2.getValue();
                    z5 = true;
                }
            }
            if (!z5) {
                x4.c.b("Parsed font for " + ((String) entry2.getKey()) + " however it was not found in the animation.");
            }
        }
        if (hashMap.isEmpty()) {
            Iterator it2 = ((HashMap) iVar.c()).entrySet().iterator();
            while (it2.hasNext()) {
                x xVar2 = (x) ((Map.Entry) it2.next()).getValue();
                if (xVar2 == null) {
                    return null;
                }
                String str5 = xVar2.f13809d;
                BitmapFactory.Options options = new BitmapFactory.Options();
                options.inScaled = true;
                options.inDensity = 160;
                if (str5.startsWith("data:") && str5.indexOf("base64,") > 0) {
                    try {
                        byte[] decode = Base64.decode(str5.substring(str5.indexOf(44) + 1), 0);
                        xVar2.f13811f = x4.h.d(xVar2.a, xVar2.f13807b, BitmapFactory.decodeByteArray(decode, 0, decode.length, options));
                    } catch (IllegalArgumentException e10) {
                        x4.c.c("data URL did not have correct base64 format.", e10);
                        return null;
                    }
                }
            }
        }
        if (str != null) {
            q4.g.f16682b.a.b(str, iVar);
        }
        return new a0(iVar);
    }

    public static Boolean h(et.r rVar, byte[] bArr) {
        try {
            et.r d6 = et.y.d(new et.p(rVar));
            for (byte b10 : bArr) {
                if (d6.readByte() != b10) {
                    return Boolean.FALSE;
                }
            }
            d6.close();
            return Boolean.TRUE;
        } catch (Exception unused) {
            x4.c.a.getClass();
            return Boolean.FALSE;
        } catch (NoSuchMethodError unused2) {
            return Boolean.FALSE;
        }
    }

    public static void i() {
        ArrayList arrayList = new ArrayList(f13765b);
        if (arrayList.size() <= 0) {
            return;
        }
        arrayList.get(0).getClass();
        throw new ClassCastException();
    }

    public static String j(Context context, int i5) {
        StringBuilder sb2 = new StringBuilder("rawRes");
        sb2.append((context.getResources().getConfiguration().uiMode & 48) == 32 ? "_night_" : "_day_");
        sb2.append(i5);
        return sb2.toString();
    }
}
