package cm;

import android.content.ComponentName;
import android.content.res.TypedArray;
import android.graphics.Color;
import android.os.Build;
import android.provider.Settings;
import com.discord.R;
import com.facebook.react.uimanager.ThemedReactContext;
import kotlin.Pair;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import yo.j;

/* loaded from: classes3.dex */
public abstract class b {
    public static final Object a;

    static {
        Integer valueOf = Integer.valueOf(R.style.aosp_light);
        Pair pair = new Pair("com.android.inputmethod.latin", new Pair(valueOf, valueOf));
        Pair pair2 = new Pair("com.google.android.inputmethod.latin", new Pair(Integer.valueOf(R.style.gboard_light), Integer.valueOf(R.style.gboard_dark)));
        Pair pair3 = new Pair("com.touchtype.swiftkey", new Pair(Integer.valueOf(R.style.swiftkey_light), Integer.valueOf(R.style.swiftkey_dark)));
        Integer valueOf2 = Integer.valueOf(R.style.gboard_tts_light);
        Integer valueOf3 = Integer.valueOf(R.style.gboard_tts_dark);
        a = v0.g(pair, pair2, pair3, new Pair("com.google.android.googlequicksearchbox", new Pair(valueOf2, valueOf3)), new Pair("com.google.android.tts", new Pair(valueOf2, valueOf3)), new Pair("ru.yandex.androidkeyboard", new Pair(Integer.valueOf(R.style.yandex_light), Integer.valueOf(R.style.yandex_dark))), new Pair("com.samsung.android.honeyboard", new Pair(Integer.valueOf(R.style.samsung_light), Integer.valueOf(R.style.samsung_dark))));
    }

    /* JADX WARN: Type inference failed for: r3v2, types: [java.lang.Object, java.util.Map] */
    public static final int a(ThemedReactContext themedReactContext) {
        ComponentName unflattenFromString;
        Intrinsics.checkNotNullParameter(themedReactContext, "<this>");
        Intrinsics.checkNotNullParameter(themedReactContext, "<this>");
        String string = Settings.Secure.getString(themedReactContext.getContentResolver(), "default_input_method");
        String str = null;
        if (string != null && (unflattenFromString = ComponentName.unflattenFromString(string)) != null) {
            str = unflattenFromString.getPackageName();
        }
        boolean b10 = tl.a.b(themedReactContext);
        String message = "Current IME: " + str;
        Intrinsics.checkNotNullParameter(message, "message");
        Pair pair = (Pair) a.get(str);
        if (pair == null) {
            pair = new Pair(Integer.valueOf(R.style.gboard_light), Integer.valueOf(R.style.gboard_dark));
        }
        int intValue = ((Number) pair.f13474d).intValue();
        int intValue2 = ((Number) pair.f13475e).intValue();
        if (b10 && Build.VERSION.SDK_INT > 29) {
            intValue = intValue2;
        }
        Intrinsics.checkNotNullParameter(themedReactContext, "<this>");
        TypedArray obtainStyledAttributes = themedReactContext.obtainStyledAttributes(intValue, ql.a.a);
        Intrinsics.checkNotNullExpressionValue(obtainStyledAttributes, "obtainStyledAttributes(...)");
        try {
            int color = obtainStyledAttributes.getColor(0, -16777216);
            int i5 = obtainStyledAttributes.getInt(1, 0);
            obtainStyledAttributes.recycle();
            return Color.argb(Color.alpha(color), j.d(Color.red(color) + i5, 0, 255), j.d(Color.green(color) + i5, 0, 255), j.d(Color.blue(color) + i5, 0, 255));
        } catch (Throwable th2) {
            obtainStyledAttributes.recycle();
            throw th2;
        }
    }
}
