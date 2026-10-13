package u3;

import android.app.Activity;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.graphics.Point;
import android.graphics.Rect;
import android.util.Log;
import android.view.Display;
import android.view.DisplayCutout;
import androidx.window.layout.WindowMetrics;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class c implements b, f, h {

    /* renamed from: c, reason: collision with root package name */
    public static final c f18794c = new c(0);

    /* renamed from: d, reason: collision with root package name */
    public static final c f18795d = new c(1);

    /* renamed from: e, reason: collision with root package name */
    public static final c f18796e = new c(2);

    /* renamed from: f, reason: collision with root package name */
    public static final c f18797f = new c(3);

    /* renamed from: g, reason: collision with root package name */
    public static final c f18798g = new c(4);

    /* renamed from: h, reason: collision with root package name */
    public static final c f18799h = new c(5);

    /* renamed from: i, reason: collision with root package name */
    public static final c f18800i = new c(6);

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f18801b;

    public /* synthetic */ c(int i5) {
        this.f18801b = i5;
    }

    @Override // u3.f
    public float a(Activity context) {
        Intrinsics.checkNotNullParameter(context, "context");
        return context.getResources().getDisplayMetrics().density;
    }

    @Override // u3.b
    public Rect b(Activity activity) {
        switch (this.f18801b) {
            case 0:
                Intrinsics.checkNotNullParameter(activity, "activity");
                Rect rect = new Rect();
                Display display = activity.getWindowManager().getDefaultDisplay();
                display.getRectSize(rect);
                Intrinsics.checkNotNullParameter(activity, "activity");
                if (!activity.isInMultiWindowMode()) {
                    Intrinsics.checkNotNull(display);
                    Intrinsics.checkNotNullParameter(display, "display");
                    Point point = new Point();
                    display.getRealSize(point);
                    Resources resources = activity.getResources();
                    int identifier = resources.getIdentifier("navigation_bar_height", "dimen", "android");
                    int dimensionPixelSize = identifier > 0 ? resources.getDimensionPixelSize(identifier) : 0;
                    int i5 = rect.bottom + dimensionPixelSize;
                    if (i5 == point.y) {
                        rect.bottom = i5;
                    } else {
                        int i6 = rect.right + dimensionPixelSize;
                        if (i6 == point.x) {
                            rect.right = i6;
                        }
                    }
                }
                return rect;
            case 1:
                Intrinsics.checkNotNullParameter(activity, "activity");
                Rect rect2 = new Rect();
                Configuration configuration = activity.getResources().getConfiguration();
                try {
                    Field declaredField = Configuration.class.getDeclaredField("windowConfiguration");
                    declaredField.setAccessible(true);
                    Object obj = declaredField.get(configuration);
                    Intrinsics.checkNotNullParameter(activity, "activity");
                    if (activity.isInMultiWindowMode()) {
                        Object invoke = obj.getClass().getDeclaredMethod("getBounds", null).invoke(obj, null);
                        Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type android.graphics.Rect");
                        rect2.set((Rect) invoke);
                    } else {
                        Object invoke2 = obj.getClass().getDeclaredMethod("getAppBounds", null).invoke(obj, null);
                        Intrinsics.checkNotNull(invoke2, "null cannot be cast to non-null type android.graphics.Rect");
                        rect2.set((Rect) invoke2);
                    }
                } catch (Exception e9) {
                    if (!(e9 instanceof NoSuchFieldException) && !(e9 instanceof NoSuchMethodException) && !(e9 instanceof IllegalAccessException) && !(e9 instanceof InvocationTargetException)) {
                        throw e9;
                    }
                    b.a.getClass();
                    Log.w(a.f18793b, e9);
                    activity.getWindowManager().getDefaultDisplay().getRectSize(rect2);
                }
                Display defaultDisplay = activity.getWindowManager().getDefaultDisplay();
                Point point2 = new Point();
                defaultDisplay.getRealSize(point2);
                Intrinsics.checkNotNullParameter(activity, "activity");
                if (!activity.isInMultiWindowMode()) {
                    Resources resources2 = activity.getResources();
                    int identifier2 = resources2.getIdentifier("navigation_bar_height", "dimen", "android");
                    int dimensionPixelSize2 = identifier2 > 0 ? resources2.getDimensionPixelSize(identifier2) : 0;
                    int i10 = rect2.bottom + dimensionPixelSize2;
                    if (i10 == point2.y) {
                        rect2.bottom = i10;
                    } else {
                        int i11 = rect2.right + dimensionPixelSize2;
                        if (i11 == point2.x) {
                            rect2.right = i11;
                        } else if (rect2.left == dimensionPixelSize2) {
                            rect2.left = 0;
                        }
                    }
                }
                if (rect2.width() < point2.x || rect2.height() < point2.y) {
                    Intrinsics.checkNotNullParameter(activity, "activity");
                    if (!activity.isInMultiWindowMode()) {
                        Intrinsics.checkNotNull(defaultDisplay);
                        DisplayCutout a = androidx.core.view.h.a(defaultDisplay);
                        if (a != null) {
                            if (rect2.left == androidx.core.view.h.s(a)) {
                                rect2.left = 0;
                            }
                            if (point2.x - rect2.right == androidx.core.view.h.t(a)) {
                                rect2.right = androidx.core.view.h.t(a) + rect2.right;
                            }
                            if (rect2.top == androidx.core.view.h.u(a)) {
                                rect2.top = 0;
                            }
                            if (point2.y - rect2.bottom == androidx.core.view.h.r(a)) {
                                rect2.bottom = androidx.core.view.h.r(a) + rect2.bottom;
                            }
                        }
                    }
                }
                return rect2;
            default:
                Intrinsics.checkNotNullParameter(activity, "activity");
                Configuration configuration2 = activity.getResources().getConfiguration();
                try {
                    Field declaredField2 = Configuration.class.getDeclaredField("windowConfiguration");
                    declaredField2.setAccessible(true);
                    Object obj2 = declaredField2.get(configuration2);
                    Object invoke3 = obj2.getClass().getDeclaredMethod("getBounds", null).invoke(obj2, null);
                    Intrinsics.checkNotNull(invoke3, "null cannot be cast to non-null type android.graphics.Rect");
                    return new Rect((Rect) invoke3);
                } catch (Exception e10) {
                    if (!(e10 instanceof NoSuchFieldException) && !(e10 instanceof NoSuchMethodException) && !(e10 instanceof IllegalAccessException) && !(e10 instanceof InvocationTargetException)) {
                        throw e10;
                    }
                    b.a.getClass();
                    Log.w(a.f18793b, e10);
                    return f18795d.b(activity);
                }
        }
    }

    @Override // u3.h
    public WindowMetrics c(Activity activity, f densityCompatHelper) {
        switch (this.f18801b) {
            case 4:
                Intrinsics.checkNotNullParameter(activity, "activity");
                Intrinsics.checkNotNullParameter(densityCompatHelper, "densityCompatHelper");
                b.a.getClass();
                break;
            case 5:
                Intrinsics.checkNotNullParameter(activity, "activity");
                Intrinsics.checkNotNullParameter(densityCompatHelper, "densityCompatHelper");
                Intrinsics.checkNotNullParameter(activity, "activity");
                Intrinsics.checkNotNullParameter(densityCompatHelper, "densityCompatHelper");
                b.a.getClass();
                break;
            default:
                Intrinsics.checkNotNullParameter(activity, "activity");
                Intrinsics.checkNotNullParameter(densityCompatHelper, "densityCompatHelper");
                b.a.getClass();
                break;
        }
        return new WindowMetrics(new s3.a(a.a().b(activity)), densityCompatHelper.a(activity));
    }
}
