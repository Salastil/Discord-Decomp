package cl;

import android.content.Context;
import android.content.res.AssetManager;
import android.content.res.Configuration;
import android.graphics.Typeface;
import android.os.Build;
import android.text.SpannableString;
import android.text.TextUtils;
import android.util.LruCache;
import android.view.View;
import android.view.ViewGroup;
import androidx.appcompat.widget.AppCompatTextView;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.common.ReactConstants;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.views.text.ReactTypefaceUtils;
import java.text.BreakIterator;
import java.util.Locale;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* loaded from: classes3.dex */
public final class e extends AppCompatTextView {
    public String E;
    public int F;
    public int G;
    public String H;
    public String I;
    public final Typeface J;
    public Typeface K;
    public boolean L;
    public boolean M;
    public final d N;
    public float O;
    public final d P;
    public boolean Q;
    public boolean R;
    public boolean S;
    public boolean T;

    /* renamed from: d, reason: collision with root package name */
    public float f3576d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f3577e;

    /* renamed from: i, reason: collision with root package name */
    public float f3578i;

    /* renamed from: v, reason: collision with root package name */
    public float f3579v;

    /* renamed from: w, reason: collision with root package name */
    public String f3580w;

    /* renamed from: x, reason: collision with root package name */
    public float f3581x;

    /* renamed from: y, reason: collision with root package name */
    public String f3582y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Type inference failed for: r0v3, types: [cl.d] */
    /* JADX WARN: Type inference failed for: r1v3, types: [cl.d] */
    public e(Context context) {
        super(context, null);
        Intrinsics.checkNotNullParameter(context, "context");
        this.f3576d = 14.0f;
        final int i5 = 1;
        this.f3577e = true;
        this.f3579v = Float.NaN;
        this.f3581x = Float.NaN;
        this.F = -1;
        this.G = -1;
        Typeface typeface = getTypeface();
        this.J = typeface;
        this.K = typeface;
        final int i6 = 0;
        this.N = new Runnable(this) { // from class: cl.d

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ e f3575e;

            {
                this.f3575e = this;
            }

            @Override // java.lang.Runnable
            public final void run() {
                switch (i6) {
                    case 0:
                        e eVar = this.f3575e;
                        eVar.M = false;
                        if (eVar.isLayoutRequested()) {
                            eVar.measure(View.MeasureSpec.makeMeasureSpec(eVar.getWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(eVar.getHeight(), 1073741824));
                            eVar.layout(eVar.getLeft(), eVar.getTop(), eVar.getRight(), eVar.getBottom());
                            break;
                        }
                        break;
                    default:
                        float pixelFromSP$default = PixelUtil.toPixelFromSP$default(1.0f, 0.0f, 2, null);
                        e eVar2 = this.f3575e;
                        if (pixelFromSP$default != eVar2.O) {
                            eVar2.O = pixelFromSP$default;
                            eVar2.Q = true;
                            eVar2.T = true;
                            eVar2.d();
                            break;
                        }
                        break;
                }
            }
        };
        float f2 = 0.0f;
        this.O = PixelUtil.toPixelFromSP$default(1.0f, 0.0f, 2, null);
        this.P = new Runnable(this) { // from class: cl.d

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ e f3575e;

            {
                this.f3575e = this;
            }

            @Override // java.lang.Runnable
            public final void run() {
                switch (i5) {
                    case 0:
                        e eVar = this.f3575e;
                        eVar.M = false;
                        if (eVar.isLayoutRequested()) {
                            eVar.measure(View.MeasureSpec.makeMeasureSpec(eVar.getWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(eVar.getHeight(), 1073741824));
                            eVar.layout(eVar.getLeft(), eVar.getTop(), eVar.getRight(), eVar.getBottom());
                            break;
                        }
                        break;
                    default:
                        float pixelFromSP$default = PixelUtil.toPixelFromSP$default(1.0f, 0.0f, 2, null);
                        e eVar2 = this.f3575e;
                        if (pixelFromSP$default != eVar2.O) {
                            eVar2.O = pixelFromSP$default;
                            eVar2.Q = true;
                            eVar2.T = true;
                            eVar2.d();
                            break;
                        }
                        break;
                }
            }
        };
        setLayoutParams(new ViewGroup.LayoutParams(-2, -2));
        setTextColor(-16777216);
        float f10 = this.f3576d;
        boolean z5 = this.f3577e;
        float f11 = this.f3578i;
        LruCache lruCache = f.a;
        setTextSize(0, (float) Math.ceil(z5 ? PixelUtil.toPixelFromSP(f10, f11) : PixelUtil.toPixelFromDIP(f10)));
        float f12 = this.f3579v;
        float textSize = getTextSize();
        boolean z6 = this.f3577e;
        float f13 = this.f3578i;
        if (!Float.isNaN(f12) && f12 != 0.0f) {
            f2 = (z6 ? PixelUtil.toPixelFromSP(f12, f13) : PixelUtil.toPixelFromDIP(f12)) / textSize;
        }
        setLetterSpacing(f2);
        setBreakStrategy(1);
        setHyphenationFrequency(0);
    }

    public final void d() {
        String str;
        Typeface typeface;
        if (this.Q) {
            this.Q = false;
            float f2 = this.f3576d;
            boolean z5 = this.f3577e;
            float f10 = this.f3578i;
            LruCache lruCache = f.a;
            setTextSize(0, (float) Math.ceil(z5 ? PixelUtil.toPixelFromSP(f2, f10) : PixelUtil.toPixelFromDIP(f2)));
            this.R = true;
        }
        if (this.R) {
            this.R = false;
            float f11 = this.f3579v;
            float textSize = getTextSize();
            boolean z6 = this.f3577e;
            float f12 = this.f3578i;
            LruCache lruCache2 = f.a;
            float f13 = 0.0f;
            if (!Float.isNaN(f11) && f11 != 0.0f) {
                f13 = (z6 ? PixelUtil.toPixelFromSP(f11, f12) : PixelUtil.toPixelFromDIP(f11)) / textSize;
            }
            setLetterSpacing(f13);
        }
        if (this.S) {
            this.S = false;
            int i5 = this.G != 2 ? 0 : 2;
            int i6 = this.F;
            String str2 = this.E;
            AssetManager assets = getContext().getAssets();
            Intrinsics.checkNotNullExpressionValue(assets, "getAssets(...)");
            Typeface applyStyles = ReactTypefaceUtils.applyStyles(this.J, i5, i6, str2, assets);
            if (applyStyles != this.K) {
                this.K = applyStyles;
                setTypeface(applyStyles);
                this.I = null;
            }
        }
        if (Build.VERSION.SDK_INT >= 26) {
            String str3 = this.H;
            if (!Intrinsics.areEqual(str3, this.I)) {
                Typeface typeface2 = this.K;
                if (str3 == null || typeface2 == null || (typeface = (Typeface) f.a.get(new i(str3, typeface2))) == null) {
                    if (this.I != null) {
                        setTypeface(this.K);
                    }
                    setFontVariationSettings(null);
                    this.I = str3;
                    if (str3 != null) {
                        try {
                            setFontVariationSettings(str3);
                            if (typeface2 != null) {
                                f.a.put(new i(str3, typeface2), getPaint().getTypeface());
                            }
                        } catch (IllegalArgumentException e9) {
                            p8.a.v(ReactConstants.TAG, "PlainText: invalid fontVariationSettings: " + e9.getMessage());
                        }
                    }
                } else {
                    setTypeface(typeface);
                    this.I = str3;
                }
            }
        }
        if (this.T) {
            this.T = false;
            String str4 = this.f3580w;
            if (str4 == null || (str = str4.toString()) == null) {
                str = "";
            }
            String str5 = this.f3582y;
            LruCache lruCache3 = f.a;
            if (str5 != null) {
                int hashCode = str5.hashCode();
                if (hashCode != -1765638420) {
                    if (hashCode != -514507343) {
                        if (hashCode == 223523538 && str5.equals("uppercase")) {
                            Locale locale = Locale.getDefault();
                            Intrinsics.checkNotNullExpressionValue(locale, "getDefault(...)");
                            str = str.toUpperCase(locale);
                            Intrinsics.checkNotNullExpressionValue(str, "toUpperCase(...)");
                        }
                    } else if (str5.equals("lowercase")) {
                        Locale locale2 = Locale.getDefault();
                        Intrinsics.checkNotNullExpressionValue(locale2, "getDefault(...)");
                        str = str.toLowerCase(locale2);
                        Intrinsics.checkNotNullExpressionValue(str, "toLowerCase(...)");
                    }
                } else if (str5.equals("capitalize")) {
                    BreakIterator wordInstance = BreakIterator.getWordInstance();
                    wordInstance.setText(str);
                    StringBuilder sb2 = new StringBuilder(str.length());
                    int first = wordInstance.first();
                    int next = wordInstance.next();
                    while (true) {
                        int i10 = next;
                        int i11 = first;
                        first = i10;
                        if (first == -1) {
                            break;
                        }
                        String substring = str.substring(i11, first);
                        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
                        if (substring.length() > 0) {
                            char upperCase = Character.toUpperCase(substring.charAt(0));
                            String substring2 = substring.substring(1);
                            Intrinsics.checkNotNullExpressionValue(substring2, "substring(...)");
                            substring = upperCase + substring2;
                        }
                        sb2.append(substring);
                        next = wordInstance.next();
                    }
                    str = sb2.toString();
                    Intrinsics.checkNotNull(str);
                }
            }
            if (Float.isNaN(this.f3581x)) {
                setText(str);
                return;
            }
            SpannableString spannableString = new SpannableString(str);
            float f14 = this.f3581x;
            spannableString.setSpan(new a(this.f3577e ? PixelUtil.toPixelFromSP(f14, this.f3578i) : PixelUtil.toPixelFromDIP(f14)), 0, spannableString.length(), 18);
            setText(spannableString);
        }
    }

    @Override // android.widget.TextView, android.view.View
    public final void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        if (this.L) {
            return;
        }
        d dVar = this.P;
        removeCallbacks(dVar);
        post(dVar);
    }

    @Override // android.view.View
    public final void requestLayout() {
        super.requestLayout();
        if (this.L || getWidth() == 0 || getHeight() == 0 || this.M) {
            return;
        }
        this.M = true;
        post(this.N);
    }

    public final void setAllowFontScaling(boolean z5) {
        if (this.f3577e == z5) {
            return;
        }
        this.f3577e = z5;
        this.Q = true;
        this.T = true;
    }

    public final void setColor(Integer num) {
        setTextColor(num != null ? num.intValue() : -16777216);
    }

    public final void setEllipsizeMode(String str) {
        TextUtils.TruncateAt truncateAt;
        if (str != null) {
            int hashCode = str.hashCode();
            if (hashCode != -1074341483) {
                if (hashCode != 3056464) {
                    if (hashCode == 3198432 && str.equals("head")) {
                        truncateAt = TextUtils.TruncateAt.START;
                    }
                } else if (str.equals("clip")) {
                    truncateAt = null;
                }
            } else if (str.equals("middle")) {
                truncateAt = TextUtils.TruncateAt.MIDDLE;
            }
            setEllipsize(truncateAt);
        }
        truncateAt = TextUtils.TruncateAt.END;
        setEllipsize(truncateAt);
    }

    public final void setFontFamily(String str) {
        this.E = str;
        this.S = true;
    }

    public final void setFontSizeSp(float f2) {
        this.f3576d = f2;
        this.Q = true;
    }

    public final void setFontStyle(String str) {
        this.G = ReactTypefaceUtils.parseFontStyle(str);
        this.S = true;
    }

    public final void setFontVariant(ReadableArray readableArray) {
        setFontFeatureSettings(ReactTypefaceUtils.parseFontVariant(readableArray));
    }

    public final void setFontWeight(String str) {
        this.F = ReactTypefaceUtils.parseFontWeight(str);
        this.S = true;
    }

    public final void setLetterSpacingDip(float f2) {
        this.f3579v = f2;
        this.R = true;
    }

    public final void setLineHeight(float f2) {
        if (f2 <= 0.0f) {
            f2 = Float.NaN;
        }
        this.f3581x = f2;
        this.T = true;
    }

    public final void setMaxFontSizeMultiplier(float f2) {
        if (this.f3578i == f2) {
            return;
        }
        this.f3578i = f2;
        this.Q = true;
        this.T = true;
    }

    public final void setMeasureOnly$react_native_plain_text_release(boolean z5) {
        this.L = z5;
    }

    public final void setNumberOfLines(int i5) {
        if (i5 <= 0) {
            i5 = Integer.MAX_VALUE;
        }
        setMaxLines(i5);
    }

    public final void setPlainText(String str) {
        this.f3580w = str;
        this.T = true;
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x0022, code lost:
    
        if (r0 != false) goto L15;
     */
    /* JADX WARN: Code restructure failed: missing block: B:11:0x0024, code lost:
    
        r1 = 3;
     */
    /* JADX WARN: Code restructure failed: missing block: B:12:0x0026, code lost:
    
        r1 = 5;
     */
    /* JADX WARN: Code restructure failed: missing block: B:15:0x0031, code lost:
    
        if (r0 != false) goto L16;
     */
    /* JADX WARN: Code restructure failed: missing block: B:18:0x003e, code lost:
    
        if (r8.equals("justify") == false) goto L30;
     */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Multi-variable type inference failed */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void setTextAlign(String str) {
        int i5 = 0;
        Object[] objArr = getLayoutDirection() == 1;
        if (str != null) {
            switch (str.hashCode()) {
                case -1364013995:
                    if (str.equals("center")) {
                        i5 = 1;
                        break;
                    }
                    break;
                case -1249482096:
                    break;
                case 3005871:
                    str.equals("auto");
                    break;
                case 3317767:
                    if (str.equals(ViewProps.LEFT)) {
                    }
                    break;
                case 108511772:
                    if (str.equals(ViewProps.RIGHT)) {
                    }
                    break;
            }
        }
        setGravity((getGravity() & (-8388616)) | i5);
        if (Build.VERSION.SDK_INT >= 26) {
            setJustificationMode(Intrinsics.areEqual(str, "justify") ? 1 : 0);
        }
    }

    public final void setTextAlignVertical(String str) {
        int i5 = 48;
        if (str != null) {
            int hashCode = str.hashCode();
            if (hashCode != -1383228885) {
                if (hashCode != -1364013995) {
                    if (hashCode == 115029) {
                        str.equals(ViewProps.TOP);
                    }
                } else if (str.equals("center")) {
                    i5 = 16;
                }
            } else if (str.equals(ViewProps.BOTTOM)) {
                i5 = 80;
            }
        }
        setGravity((getGravity() & (-113)) | i5);
    }

    public final void setTextDecorationLine(String str) {
        setPaintFlags((str == null || !StringsKt.D(str, "underline", false)) ? getPaintFlags() & (-9) : getPaintFlags() | 8);
        setPaintFlags((str == null || !StringsKt.D(str, "line-through", false)) ? getPaintFlags() & (-17) : getPaintFlags() | 16);
    }

    public final void setTextTransform(String str) {
        this.f3582y = str;
        this.T = true;
    }

    public final void setVariationSettings(String str) {
        String str2 = null;
        String obj = str != null ? StringsKt.b0(str).toString() : null;
        if (obj != null && obj.length() != 0 && !obj.equalsIgnoreCase("normal")) {
            str2 = obj;
        }
        this.H = str2;
    }
}
