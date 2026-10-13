package i;

import android.R;
import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import androidx.appcompat.widget.AppCompatTextView;
import androidx.collection.SimpleArrayMap;
import java.lang.reflect.Constructor;

/* loaded from: classes.dex */
public class b0 {

    /* renamed from: b, reason: collision with root package name */
    public static final Class[] f10271b = {Context.class, AttributeSet.class};

    /* renamed from: c, reason: collision with root package name */
    public static final int[] f10272c = {R.attr.onClick};

    /* renamed from: d, reason: collision with root package name */
    public static final int[] f10273d = {R.attr.accessibilityHeading};

    /* renamed from: e, reason: collision with root package name */
    public static final int[] f10274e = {R.attr.accessibilityPaneTitle};

    /* renamed from: f, reason: collision with root package name */
    public static final int[] f10275f = {R.attr.screenReaderFocusable};

    /* renamed from: g, reason: collision with root package name */
    public static final String[] f10276g = {"android.widget.", "android.view.", "android.webkit."};

    /* renamed from: h, reason: collision with root package name */
    public static final SimpleArrayMap f10277h = new SimpleArrayMap(0);
    public final Object[] a = new Object[2];

    public androidx.appcompat.widget.r a(Context context, AttributeSet attributeSet) {
        return new androidx.appcompat.widget.r(context, attributeSet);
    }

    public androidx.appcompat.widget.s b(Context context, AttributeSet attributeSet) {
        return new androidx.appcompat.widget.s(context, attributeSet, com.discord.R.attr.buttonStyle);
    }

    public androidx.appcompat.widget.t c(Context context, AttributeSet attributeSet) {
        return new androidx.appcompat.widget.t(context, attributeSet, com.discord.R.attr.checkboxStyle);
    }

    public androidx.appcompat.widget.d0 d(Context context, AttributeSet attributeSet) {
        return new androidx.appcompat.widget.d0(context, attributeSet);
    }

    public AppCompatTextView e(Context context, AttributeSet attributeSet) {
        return new AppCompatTextView(context, attributeSet);
    }

    public final View f(Context context, String str, String str2) {
        String concat;
        SimpleArrayMap simpleArrayMap = f10277h;
        Constructor constructor = (Constructor) simpleArrayMap.get(str);
        if (constructor == null) {
            if (str2 != null) {
                try {
                    concat = str2.concat(str);
                } catch (Exception unused) {
                    return null;
                }
            } else {
                concat = str;
            }
            constructor = Class.forName(concat, false, context.getClassLoader()).asSubclass(View.class).getConstructor(f10271b);
            simpleArrayMap.put(str, constructor);
        }
        constructor.setAccessible(true);
        return (View) constructor.newInstance(this.a);
    }
}
