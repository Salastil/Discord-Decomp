package a1;

import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.graphics.Shader;
import android.graphics.Typeface;
import android.os.Handler;
import android.os.Looper;
import android.util.AttributeSet;
import android.util.Base64;
import android.util.Log;
import android.util.TypedValue;
import android.util.Xml;
import com.facebook.react.common.assets.ReactFontManager;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.ForkJoinPool;
import java.util.concurrent.TimeUnit;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

/* loaded from: classes.dex */
public abstract class b {
    public static final float[][] a = {new float[]{0.401288f, 0.650173f, -0.051461f}, new float[]{-0.250268f, 1.204414f, 0.045854f}, new float[]{-0.002079f, 0.048952f, 0.953127f}};

    /* renamed from: b, reason: collision with root package name */
    public static final float[][] f7b = {new float[]{1.8620678f, -1.0112547f, 0.14918678f}, new float[]{0.38752654f, 0.62144744f, -0.00897398f}, new float[]{-0.0158415f, -0.03412294f, 1.0499644f}};

    /* renamed from: c, reason: collision with root package name */
    public static final float[] f8c = {95.047f, 100.0f, 108.883f};

    /* renamed from: d, reason: collision with root package name */
    public static final float[][] f9d = {new float[]{0.41233894f, 0.35762063f, 0.18051042f}, new float[]{0.2126f, 0.7152f, 0.0722f}, new float[]{0.01932141f, 0.11916382f, 0.9503448f}};

    /* renamed from: e, reason: collision with root package name */
    public static final Object f10e = new Object();

    /* renamed from: f, reason: collision with root package name */
    public static Method f11f;

    /* renamed from: g, reason: collision with root package name */
    public static boolean f12g;

    public static d b(TypedArray typedArray, XmlPullParser xmlPullParser, Resources.Theme theme, String str, int i5) {
        d dVar;
        if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", str) != null) {
            TypedValue typedValue = new TypedValue();
            typedArray.getValue(i5, typedValue);
            int i6 = typedValue.type;
            if (i6 >= 28 && i6 <= 31) {
                return new d((Shader) null, (ColorStateList) null, typedValue.data);
            }
            try {
                dVar = d.c(typedArray.getResources(), typedArray.getResourceId(i5, 0), theme);
            } catch (Exception e9) {
                Log.e("ComplexColorCompat", "Failed to inflate ComplexColor.", e9);
                dVar = null;
            }
            if (dVar != null) {
                return dVar;
            }
        }
        return new d((Shader) null, (ColorStateList) null, 0);
    }

    public static boolean c(XmlPullParser xmlPullParser, String str) {
        return xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", str) != null;
    }

    public static int d(float f2) {
        if (f2 < 1.0f) {
            return -16777216;
        }
        if (f2 > 99.0f) {
            return -1;
        }
        float f10 = (f2 + 16.0f) / 116.0f;
        float f11 = f2 > 8.0f ? f10 * f10 * f10 : f2 / 903.2963f;
        float f12 = f10 * f10 * f10;
        boolean z5 = f12 > 0.008856452f;
        float f13 = z5 ? f12 : ((f10 * 116.0f) - 16.0f) / 903.2963f;
        if (!z5) {
            f12 = ((f10 * 116.0f) - 16.0f) / 903.2963f;
        }
        float[] fArr = f8c;
        return b1.c.a(f13 * fArr[0], f11 * fArr[1], f12 * fArr[2]);
    }

    public static float e(int i5) {
        float f2 = i5 / 255.0f;
        return (f2 <= 0.04045f ? f2 / 12.92f : (float) Math.pow((f2 + 0.055f) / 1.055f, 2.4000000953674316d)) * 100.0f;
    }

    public static TypedArray f(Resources resources, Resources.Theme theme, AttributeSet attributeSet, int[] iArr) {
        return theme == null ? resources.obtainAttributes(attributeSet, iArr) : theme.obtainStyledAttributes(attributeSet, iArr, 0, 0);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:34:0x011c A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:71:? A[SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r3v10 */
    /* JADX WARN: Type inference failed for: r3v11 */
    /* JADX WARN: Type inference failed for: r3v13 */
    /* JADX WARN: Type inference failed for: r3v14, types: [android.content.res.TypedArray] */
    /* JADX WARN: Type inference failed for: r3v6 */
    /* JADX WARN: Type inference failed for: r3v7 */
    /* JADX WARN: Type inference failed for: r3v8 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static e i(XmlResourceParser xmlResourceParser, Resources resources) {
        int next;
        int i5;
        int i6;
        String str;
        String str2;
        ?? r32;
        long j;
        Throwable th2;
        TypedArray typedArray;
        boolean isTerminated;
        do {
            next = xmlResourceParser.next();
            i5 = 2;
            if (next == 2) {
                break;
            }
        } while (next != 1);
        if (next != 2) {
            throw new XmlPullParserException("No start tag found");
        }
        xmlResourceParser.require(2, null, "font-family");
        if (!xmlResourceParser.getName().equals("font-family")) {
            k(xmlResourceParser);
            return null;
        }
        TypedArray obtainAttributes = resources.obtainAttributes(Xml.asAttributeSet(xmlResourceParser), w0.a.f19597b);
        int i10 = 0;
        String string = obtainAttributes.getString(0);
        String string2 = obtainAttributes.getString(5);
        String string3 = obtainAttributes.getString(6);
        String string4 = obtainAttributes.getString(2);
        int resourceId = obtainAttributes.getResourceId(1, 0);
        int i11 = 3;
        int integer = obtainAttributes.getInteger(3, 1);
        int integer2 = obtainAttributes.getInteger(4, 500);
        String string5 = obtainAttributes.getString(7);
        obtainAttributes.recycle();
        if (string == null || string2 == null) {
            ArrayList arrayList = new ArrayList();
            while (xmlResourceParser.next() != 3) {
                if (xmlResourceParser.getEventType() == 2) {
                    if (xmlResourceParser.getName().equals("font")) {
                        TypedArray obtainAttributes2 = resources.obtainAttributes(Xml.asAttributeSet(xmlResourceParser), w0.a.f19598c);
                        int i12 = obtainAttributes2.getInt(obtainAttributes2.hasValue(8) ? 8 : 1, ReactFontManager.TypefaceStyle.NORMAL);
                        boolean z5 = 1 == obtainAttributes2.getInt(obtainAttributes2.hasValue(6) ? 6 : 2, 0);
                        int i13 = obtainAttributes2.hasValue(9) ? 9 : 3;
                        String string6 = obtainAttributes2.getString(obtainAttributes2.hasValue(7) ? 7 : 4);
                        int i14 = obtainAttributes2.getInt(i13, 0);
                        int i15 = obtainAttributes2.hasValue(5) ? 5 : 0;
                        int resourceId2 = obtainAttributes2.getResourceId(i15, 0);
                        String string7 = obtainAttributes2.getString(i15);
                        obtainAttributes2.recycle();
                        while (xmlResourceParser.next() != 3) {
                            k(xmlResourceParser);
                        }
                        arrayList.add(new g(string7, z5, i12, i14, string6, resourceId2));
                    } else {
                        k(xmlResourceParser);
                    }
                }
            }
            if (arrayList.isEmpty()) {
                return null;
            }
            return new f((g[]) arrayList.toArray(new g[0]));
        }
        List j5 = j(resources, resourceId);
        ArrayList arrayList2 = new ArrayList();
        while (xmlResourceParser.next() != i11) {
            if (xmlResourceParser.getEventType() == i5) {
                if (xmlResourceParser.getName().equals("fallback")) {
                    TypedArray obtainAttributes3 = resources.obtainAttributes(Xml.asAttributeSet(xmlResourceParser), w0.a.f19599d);
                    int i16 = integer;
                    int i17 = 3;
                    try {
                        String string8 = obtainAttributes3.getString(i10);
                        String string9 = obtainAttributes3.getString(1);
                        String string10 = obtainAttributes3.getString(i5);
                        if (string8 == null) {
                            r32 = obtainAttributes3;
                            j = 1;
                            throw new XmlPullParserException("query attribute must be set in fallback element");
                        }
                        while (true) {
                            int i18 = i17;
                            if (xmlResourceParser.next() == i18) {
                                break;
                            }
                            try {
                                k(xmlResourceParser);
                                i17 = i18;
                            } catch (Throwable th3) {
                                th2 = th3;
                                typedArray = obtainAttributes3;
                                j = 1;
                            }
                        }
                        try {
                            r32 = obtainAttributes3;
                            str = string3;
                            str2 = string4;
                            i6 = i16;
                            j = 1;
                            try {
                                i1.c cVar = new i1.c(j5, string, string2, string8, string9, string10);
                                if (r32 instanceof AutoCloseable) {
                                    ((AutoCloseable) r32).close();
                                } else if (r32 instanceof ExecutorService) {
                                    ExecutorService executorService = (ExecutorService) r32;
                                    if (executorService != ForkJoinPool.commonPool() && !(isTerminated = executorService.isTerminated())) {
                                        executorService.shutdown();
                                        boolean z6 = false;
                                        while (!isTerminated) {
                                            try {
                                                isTerminated = executorService.awaitTermination(1L, TimeUnit.DAYS);
                                            } catch (InterruptedException unused) {
                                                if (!z6) {
                                                    executorService.shutdownNow();
                                                    z6 = true;
                                                }
                                            }
                                        }
                                        if (z6) {
                                            Thread.currentThread().interrupt();
                                        }
                                    }
                                } else {
                                    r32.recycle();
                                }
                                arrayList2.add(cVar);
                            } catch (Throwable th4) {
                                th = th4;
                            }
                        } catch (Throwable th5) {
                            th = th5;
                            r32 = obtainAttributes3;
                            j = 1;
                            th2 = th;
                            typedArray = r32;
                            if (typedArray != null) {
                            }
                        }
                        th = th4;
                    } catch (Throwable th6) {
                        th = th6;
                        r32 = obtainAttributes3;
                    }
                    th2 = th;
                    typedArray = r32;
                    if (typedArray != null) {
                        throw th2;
                    }
                    try {
                        if (typedArray instanceof AutoCloseable) {
                            typedArray.close();
                            throw th2;
                        }
                        if (!(typedArray instanceof ExecutorService)) {
                            typedArray.recycle();
                            throw th2;
                        }
                        ExecutorService executorService2 = (ExecutorService) typedArray;
                        if (executorService2 == ForkJoinPool.commonPool()) {
                            throw th2;
                        }
                        boolean isTerminated2 = executorService2.isTerminated();
                        if (isTerminated2) {
                            throw th2;
                        }
                        executorService2.shutdown();
                        boolean z7 = false;
                        while (!isTerminated2) {
                            try {
                                isTerminated2 = executorService2.awaitTermination(j, TimeUnit.DAYS);
                            } catch (InterruptedException unused2) {
                                if (!z7) {
                                    executorService2.shutdownNow();
                                    z7 = true;
                                }
                            }
                        }
                        if (!z7) {
                            throw th2;
                        }
                        Thread.currentThread().interrupt();
                        throw th2;
                    } catch (Throwable th7) {
                        th2.addSuppressed(th7);
                        throw th2;
                    }
                }
                i6 = integer;
                str = string3;
                str2 = string4;
                k(xmlResourceParser);
                integer = i6;
                string3 = str;
                string4 = str2;
                i5 = 2;
                i10 = 0;
                i11 = 3;
            }
        }
        int i19 = integer;
        String str3 = string3;
        String str4 = string4;
        if (!arrayList2.isEmpty()) {
            return new h(i19, integer2, string5, arrayList2);
        }
        if (str3 == null) {
            throw new IllegalArgumentException("The provider font XML requires query attribute or fallback children.");
        }
        arrayList2.add(new i1.c(j5, string, string2, str3, null, null));
        if (str4 != null) {
            arrayList2.add(new i1.c(j5, string, string2, str4, null, null));
        }
        return new h(i19, integer2, string5, arrayList2);
    }

    public static List j(Resources resources, int i5) {
        if (i5 == 0) {
            return Collections.EMPTY_LIST;
        }
        TypedArray obtainTypedArray = resources.obtainTypedArray(i5);
        try {
            if (obtainTypedArray.length() == 0) {
                return Collections.EMPTY_LIST;
            }
            ArrayList arrayList = new ArrayList();
            if (obtainTypedArray.getType(0) == 1) {
                for (int i6 = 0; i6 < obtainTypedArray.length(); i6++) {
                    int resourceId = obtainTypedArray.getResourceId(i6, 0);
                    if (resourceId != 0) {
                        String[] stringArray = resources.getStringArray(resourceId);
                        ArrayList arrayList2 = new ArrayList();
                        for (String str : stringArray) {
                            arrayList2.add(Base64.decode(str, 0));
                        }
                        arrayList.add(arrayList2);
                    }
                }
            } else {
                String[] stringArray2 = resources.getStringArray(i5);
                ArrayList arrayList3 = new ArrayList();
                for (String str2 : stringArray2) {
                    arrayList3.add(Base64.decode(str2, 0));
                }
                arrayList.add(arrayList3);
            }
            return arrayList;
        } finally {
            obtainTypedArray.recycle();
        }
    }

    public static void k(XmlPullParser xmlPullParser) {
        int i5 = 1;
        while (i5 > 0) {
            int next = xmlPullParser.next();
            if (next == 2) {
                i5++;
            } else if (next == 3) {
                i5--;
            }
        }
    }

    public static float l() {
        return ((float) Math.pow((50.0f + 16.0d) / 116.0d, 3.0d)) * 100.0f;
    }

    public void a(int i5) {
        new Handler(Looper.getMainLooper()).post(new l(i5, 0, this));
    }

    public abstract void g(int i5);

    public abstract void h(Typeface typeface);
}
