package b1;

import a5.s;
import a5.y;
import af.n;
import af.p;
import android.content.Context;
import android.content.res.Resources;
import android.graphics.Paint;
import android.graphics.Typeface;
import android.graphics.fonts.Font;
import android.graphics.fonts.FontFamily;
import android.graphics.text.PositionedGlyphs;
import android.graphics.text.TextRunShaper;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.os.Trace;
import android.text.TextUtils;
import android.util.Log;
import androidx.collection.LruCache;
import androidx.collection.SimpleArrayMap;
import com.google.android.gms.internal.play_billing.v0;
import java.io.IOException;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Objects;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;

/* loaded from: classes.dex */
public abstract class f {
    public static final zk.a a;

    /* renamed from: b, reason: collision with root package name */
    public static final LruCache f2710b;

    /* renamed from: c, reason: collision with root package name */
    public static Paint f2711c;

    static {
        Trace.beginSection(com.facebook.imagepipeline.nativecode.c.Y("TypefaceCompat static init"));
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 31) {
            a = new l();
        } else if (i5 >= 29) {
            a = new k();
        } else if (i5 >= 28) {
            a = new j();
        } else if (i5 >= 26) {
            a = new i();
        } else {
            Method method = h.f2715l;
            if (method == null) {
                Log.w("TypefaceCompatApi24Impl", "Unable to collect necessary private methods.Fallback to legacy implementation.");
            }
            if (method != null) {
                a = new h();
            } else {
                a = new g();
            }
        }
        f2710b = new LruCache(16);
        f2711c = null;
        Trace.endSection();
    }

    public static Typeface a(Context context, a1.e eVar, Resources resources, int i5, String str, int i6, int i10, a1.b bVar, boolean z5) {
        Typeface h6;
        Typeface build;
        FontFamily build2;
        int i11 = -3;
        int i12 = 0;
        if (eVar instanceof a1.h) {
            a1.h hVar = (a1.h) eVar;
            String str2 = hVar.f24d;
            h6 = null;
            int i13 = 1;
            if (TextUtils.isEmpty(str2) || (build = c(str2)) == null) {
                ArrayList arrayList = hVar.a;
                if (arrayList.size() == 1) {
                    build = c(((i1.c) arrayList.get(0)).f10441e);
                } else {
                    if (Build.VERSION.SDK_INT >= 31) {
                        int i14 = 0;
                        while (true) {
                            if (i14 >= arrayList.size()) {
                                int i15 = 0;
                                Typeface.CustomFallbackBuilder customFallbackBuilder = null;
                                while (true) {
                                    if (i15 >= arrayList.size()) {
                                        break;
                                    }
                                    i1.c cVar = (i1.c) arrayList.get(i15);
                                    if (i15 == arrayList.size() - 1 && TextUtils.isEmpty(cVar.f10442f)) {
                                        customFallbackBuilder.setSystemFallback(cVar.f10441e);
                                        break;
                                    }
                                    String str3 = cVar.f10441e;
                                    String str4 = cVar.f10442f;
                                    Font d6 = d(c(str3));
                                    if (d6 == null) {
                                        Log.w("TypefaceCompat", "Unable identify the primary font for " + cVar.f10441e + ". Falling back to provider font.");
                                        break;
                                    }
                                    if (TextUtils.isEmpty(str4)) {
                                        try {
                                            build2 = new FontFamily.Builder(androidx.core.view.c.a(d6).setFontVariationSettings(str4).build()).build();
                                        } catch (IOException unused) {
                                            Log.e("TypefaceCompat", "Failed to clone Font instance. Fall back to provider font.");
                                        }
                                    } else {
                                        build2 = new FontFamily.Builder(d6).build();
                                    }
                                    if (customFallbackBuilder == null) {
                                        customFallbackBuilder = new Typeface.CustomFallbackBuilder(build2);
                                    } else {
                                        customFallbackBuilder.addCustomFallback(build2);
                                    }
                                    i15++;
                                }
                                build = customFallbackBuilder.build();
                            } else {
                                if (c(((i1.c) arrayList.get(i14)).f10441e) == null) {
                                    break;
                                }
                                i14++;
                            }
                        }
                    }
                    build = null;
                }
            }
            if (build != null) {
                if (bVar != null) {
                    new Handler(Looper.getMainLooper()).post(new a1.k(i12, bVar, build));
                }
                f2710b.b(b(resources, i5, str, i6, i10), build);
                return build;
            }
            boolean z6 = !z5 ? bVar != null : hVar.f23c != 0;
            int i16 = z5 ? hVar.f22b : -1;
            Handler handler = new Handler(Looper.getMainLooper());
            u4.b bVar2 = new u4.b(5);
            bVar2.f18810e = bVar;
            ArrayList arrayList2 = hVar.a;
            int i17 = 2;
            n nVar = new n(handler, 2);
            e4.e eVar2 = new e4.e(11, bVar2, nVar);
            int i18 = 12;
            if (!z6) {
                String a10 = i1.f.a(i10, arrayList2);
                Typeface typeface = (Typeface) i1.f.a.a(a10);
                if (typeface != null) {
                    nVar.execute(new v0(i18, bVar2, typeface));
                    h6 = typeface;
                } else {
                    y yVar = new y(i13, eVar2);
                    synchronized (i1.f.f10451c) {
                        try {
                            SimpleArrayMap simpleArrayMap = i1.f.f10452d;
                            ArrayList arrayList3 = (ArrayList) simpleArrayMap.get(a10);
                            if (arrayList3 != null) {
                                arrayList3.add(yVar);
                            } else {
                                ArrayList arrayList4 = new ArrayList();
                                arrayList4.add(yVar);
                                simpleArrayMap.put(a10, arrayList4);
                                i1.d dVar = new i1.d(a10, context, arrayList2, i10, 1);
                                ThreadPoolExecutor threadPoolExecutor = i1.f.f10450b;
                                y yVar2 = new y(i17, a10);
                                Handler handler2 = Looper.myLooper() == null ? new Handler(Looper.getMainLooper()) : new Handler();
                                s sVar = new s();
                                sVar.f220e = dVar;
                                sVar.f221i = yVar2;
                                sVar.f222v = handler2;
                                threadPoolExecutor.execute(sVar);
                            }
                        } finally {
                        }
                    }
                }
            } else {
                if (arrayList2.size() > 1) {
                    throw new IllegalArgumentException("Fallbacks with blocking fetches are not supported for performance reasons");
                }
                i1.c cVar2 = (i1.c) arrayList2.get(0);
                LruCache lruCache = i1.f.a;
                ArrayList arrayList5 = new ArrayList(1);
                Object obj = new Object[]{cVar2}[0];
                Objects.requireNonNull(obj);
                arrayList5.add(obj);
                String a11 = i1.f.a(i10, Collections.unmodifiableList(arrayList5));
                Typeface typeface2 = (Typeface) i1.f.a.a(a11);
                if (typeface2 != null) {
                    nVar.execute(new v0(i18, bVar2, typeface2));
                    h6 = typeface2;
                } else if (i16 == -1) {
                    ArrayList arrayList6 = new ArrayList(1);
                    Object obj2 = new Object[]{cVar2}[0];
                    Objects.requireNonNull(obj2);
                    arrayList6.add(obj2);
                    i1.e b10 = i1.f.b(a11, context, Collections.unmodifiableList(arrayList6), i10);
                    eVar2.y(b10);
                    h6 = b10.a;
                } else {
                    try {
                        try {
                            try {
                                try {
                                    i1.e eVar3 = (i1.e) i1.f.f10450b.submit(new i1.d(a11, context, cVar2, i10, 0)).get(i16, TimeUnit.MILLISECONDS);
                                    eVar2.y(eVar3);
                                    h6 = eVar3.a;
                                } catch (ExecutionException e9) {
                                    throw new RuntimeException(e9);
                                }
                            } catch (TimeoutException unused2) {
                                throw new InterruptedException("timeout");
                            }
                        } catch (InterruptedException e10) {
                            throw e10;
                        }
                    } catch (InterruptedException unused3) {
                        ((n) eVar2.f7944i).execute(new p(i11, 4, (u4.b) eVar2.f7943e));
                    }
                }
            }
        } else {
            h6 = a.h(context, (a1.f) eVar, resources, i10);
            if (bVar != null) {
                if (h6 != null) {
                    new Handler(Looper.getMainLooper()).post(new a1.k(i12, bVar, h6));
                } else {
                    bVar.a(-3);
                }
            }
        }
        if (h6 != null) {
            f2710b.b(b(resources, i5, str, i6, i10), h6);
        }
        return h6;
    }

    public static String b(Resources resources, int i5, String str, int i6, int i10) {
        return resources.getResourcePackageName(i5) + '-' + str + '-' + i6 + '-' + i5 + '-' + i10;
    }

    public static Typeface c(String str) {
        if (str != null && !str.isEmpty()) {
            Typeface create = Typeface.create(str, 0);
            Typeface create2 = Typeface.create(Typeface.DEFAULT, 0);
            if (create != null && !create.equals(create2)) {
                return create;
            }
        }
        return null;
    }

    public static Font d(Typeface typeface) {
        if (f2711c == null) {
            f2711c = new Paint();
        }
        f2711c.setTextSize(10.0f);
        f2711c.setTypeface(typeface);
        PositionedGlyphs shapeTextRun = TextRunShaper.shapeTextRun((CharSequence) " ", 0, 1, 0, 1, 0.0f, 0.0f, false, f2711c);
        if (shapeTextRun.glyphCount() == 0) {
            return null;
        }
        return shapeTextRun.getFont(0);
    }
}
