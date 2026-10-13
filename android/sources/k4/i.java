package k4;

import android.content.Context;
import android.net.Uri;
import android.util.Log;
import android.widget.ImageView;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableType;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.util.RNLog;
import fo.q;
import fo.r;
import java.io.ByteArrayInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.lang.ref.WeakReference;
import java.util.Arrays;
import java.util.Collection;
import java.util.List;
import java.util.ListIterator;
import java.util.regex.Pattern;
import java.util.zip.ZipInputStream;
import kotlin.Result;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Regex;
import l4.f0;
import l4.g0;
import l4.h0;
import l4.v;
import l4.z;

/* loaded from: classes.dex */
public final class i {

    /* renamed from: s, reason: collision with root package name */
    public static Function1 f13174s;
    public final WeakReference a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f13175b;

    /* renamed from: c, reason: collision with root package name */
    public String f13176c;

    /* renamed from: d, reason: collision with root package name */
    public ImageView.ScaleType f13177d;

    /* renamed from: e, reason: collision with root package name */
    public String f13178e;

    /* renamed from: f, reason: collision with root package name */
    public Boolean f13179f;

    /* renamed from: g, reason: collision with root package name */
    public Boolean f13180g;

    /* renamed from: h, reason: collision with root package name */
    public ReadableArray f13181h;

    /* renamed from: i, reason: collision with root package name */
    public ReadableArray f13182i;
    public f0 j;
    public Integer k;

    /* renamed from: l, reason: collision with root package name */
    public String f13183l;

    /* renamed from: m, reason: collision with root package name */
    public String f13184m;

    /* renamed from: n, reason: collision with root package name */
    public String f13185n;

    /* renamed from: o, reason: collision with root package name */
    public Float f13186o;

    /* renamed from: p, reason: collision with root package name */
    public Boolean f13187p;

    /* renamed from: q, reason: collision with root package name */
    public Boolean f13188q;

    /* renamed from: r, reason: collision with root package name */
    public Float f13189r;

    public i(l4.h view) {
        Intrinsics.checkNotNullParameter(view, "view");
        this.a = new WeakReference(view);
        view.setFontAssetDelegate(new h(view));
    }

    public final void a() {
        int i5;
        Collection collection;
        Object i6;
        String str;
        l4.h hVar = (l4.h) this.a.get();
        if (hVar == null) {
            return;
        }
        v vVar = hVar.f13737w;
        ReadableArray readableArray = this.f13182i;
        if (readableArray != null && readableArray.size() > 0) {
            h0 h0Var = new h0(hVar);
            int size = readableArray.size();
            for (int i10 = 0; i10 < size; i10++) {
                ReadableMap map = readableArray.getMap(i10);
                if (map != null) {
                    h0Var.a.put(map.getString("find"), map.getString("replace"));
                    l4.h hVar2 = h0Var.f13740b;
                    if (hVar2 != null) {
                        hVar2.invalidate();
                    }
                }
            }
            hVar.setTextDelegate(h0Var);
        }
        String str2 = this.f13183l;
        if (str2 != null) {
            hVar.e(new ByteArrayInputStream(str2.getBytes()), String.valueOf(str2.hashCode()));
            this.f13183l = null;
        }
        String str3 = this.f13184m;
        if (str3 != null) {
            File file = new File(str3);
            if (file.exists()) {
                hVar.e(new FileInputStream(file), String.valueOf(str3.hashCode()));
            } else {
                hVar.g(str3, String.valueOf(str3.hashCode()));
            }
            this.f13184m = null;
        }
        String str4 = this.f13185n;
        if (str4 != null) {
            Function1 function1 = f13174s;
            if (function1 != null && (str = (String) function1.invoke(str4)) != null) {
                str4 = str;
            }
            File file2 = new File(str4);
            if (file2.exists()) {
                hVar.f(new ZipInputStream(new FileInputStream(file2)), String.valueOf(str4.hashCode()));
                this.f13185n = null;
                return;
            }
            try {
                q qVar = Result.f13476e;
                i6 = Uri.parse(str4).getScheme();
            } catch (Throwable th2) {
                q qVar2 = Result.f13476e;
                i6 = ki.b.i(th2);
            }
            if (i6 instanceof r) {
                i6 = null;
            }
            String str5 = (String) i6;
            if (str5 != null) {
                if (Intrinsics.areEqual(str5, "file")) {
                    String path = Uri.parse(str4).getPath();
                    if (path != null) {
                        hVar.f(new ZipInputStream(new FileInputStream(new File(path))), String.valueOf(str4.hashCode()));
                    } else {
                        Log.w("lottie-react-native", "URI path is null for asset: ".concat(str4));
                    }
                } else {
                    hVar.setAnimationFromUrl(str4);
                }
                this.f13185n = null;
                return;
            }
            int identifier = hVar.getResources().getIdentifier(str4, "raw", hVar.getContext().getPackageName());
            if (identifier == 0) {
                RNLog.e("Animation for " + str4 + " was not found in raw resources");
                return;
            }
            hVar.setAnimation(identifier);
            this.f13175b = false;
            this.f13185n = null;
        }
        if (this.f13175b) {
            hVar.setAnimation(this.f13176c);
            this.f13175b = false;
        }
        Float f2 = this.f13186o;
        if (f2 != null) {
            hVar.setProgress(f2.floatValue());
            this.f13186o = null;
        }
        Boolean bool = this.f13187p;
        if (bool != null) {
            hVar.setRepeatCount(bool.booleanValue() ? -1 : 0);
            this.f13187p = null;
        }
        Boolean bool2 = this.f13188q;
        if (bool2 != null && bool2.booleanValue() && !vVar.j()) {
            hVar.playAnimation();
        }
        Float f10 = this.f13189r;
        if (f10 != null) {
            hVar.setSpeed(f10.floatValue());
            this.f13189r = null;
        }
        ImageView.ScaleType scaleType = this.f13177d;
        if (scaleType != null) {
            hVar.setScaleType(scaleType);
            this.f13177d = null;
        }
        f0 f0Var = this.j;
        if (f0Var != null) {
            hVar.setRenderMode(f0Var);
            this.j = null;
        }
        Integer num = this.k;
        if (num != null) {
            hVar.setLayerType(num.intValue(), null);
        }
        String str6 = this.f13178e;
        if (str6 != null) {
            hVar.setImageAssetsFolder(str6);
            this.f13178e = null;
        }
        Boolean bool3 = this.f13179f;
        if (bool3 != null) {
            hVar.d(bool3.booleanValue());
            this.f13179f = null;
        }
        Boolean bool4 = this.f13180g;
        if (bool4 != null) {
            hVar.setSafeMode(bool4.booleanValue());
            this.f13180g = null;
        }
        ReadableArray readableArray2 = this.f13181h;
        if (readableArray2 == null || readableArray2.size() <= 0) {
            return;
        }
        int size2 = readableArray2.size();
        for (int i11 = 0; i11 < size2; i11++) {
            ReadableMap map2 = readableArray2.getMap(i11);
            if (map2 != null) {
                if (map2.getType(ViewProps.COLOR) == ReadableType.Map) {
                    ReadableMap map3 = map2.getMap(ViewProps.COLOR);
                    Context context = hVar.getContext();
                    Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
                    Integer color = ColorPropConverter.getColor(map3, context);
                    i5 = color != null ? color.intValue() : 0;
                } else {
                    i5 = map2.getInt(ViewProps.COLOR);
                }
                String k = k0.d.k(map2.getString("keypath"), ".**");
                String quote = Pattern.quote(".");
                Intrinsics.checkNotNullExpressionValue(quote, "quote(...)");
                List f11 = new Regex(quote).f(k);
                if (!f11.isEmpty()) {
                    ListIterator listIterator = f11.listIterator(f11.size());
                    while (listIterator.hasPrevious()) {
                        if (((String) listIterator.previous()).length() != 0) {
                            collection = CollectionsKt.f0(f11, listIterator.nextIndex() + 1);
                            break;
                        }
                    }
                }
                collection = m0.f13512d;
                String[] strArr = (String[]) collection.toArray(new String[0]);
                vVar.a(new q4.e((String[]) Arrays.copyOf(strArr, strArr.length)), z.F, new e4.e(new g0(i5)));
            }
        }
    }
}
