package androidx.appcompat.widget;

import android.graphics.drawable.Drawable;
import com.facebook.react.uimanager.ViewProps;
import java.lang.reflect.Field;
import java.lang.reflect.Method;

/* loaded from: classes.dex */
public abstract class l1 {
    public static final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public static final Method f1028b;

    /* renamed from: c, reason: collision with root package name */
    public static final Field f1029c;

    /* renamed from: d, reason: collision with root package name */
    public static final Field f1030d;

    /* renamed from: e, reason: collision with root package name */
    public static final Field f1031e;

    /* renamed from: f, reason: collision with root package name */
    public static final Field f1032f;

    /* JADX WARN: Removed duplicated region for block: B:14:0x004b  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0058  */
    static {
        Method method;
        Field field;
        Field field2;
        Field field3;
        Field field4;
        boolean z5;
        try {
            Class<?> cls = Class.forName("android.graphics.Insets");
            method = Drawable.class.getMethod("getOpticalInsets", null);
            try {
                field = cls.getField(ViewProps.LEFT);
                try {
                    field2 = cls.getField(ViewProps.TOP);
                    try {
                        field3 = cls.getField(ViewProps.RIGHT);
                        try {
                            field4 = cls.getField(ViewProps.BOTTOM);
                            z5 = true;
                        } catch (ClassNotFoundException | NoSuchFieldException | NoSuchMethodException unused) {
                            field4 = null;
                            z5 = false;
                            if (z5) {
                            }
                        }
                    } catch (ClassNotFoundException | NoSuchFieldException | NoSuchMethodException unused2) {
                        field3 = null;
                    }
                } catch (ClassNotFoundException unused3) {
                    field2 = null;
                    field3 = field2;
                    field4 = null;
                    z5 = false;
                    if (z5) {
                    }
                } catch (NoSuchFieldException unused4) {
                    field2 = null;
                    field3 = field2;
                    field4 = null;
                    z5 = false;
                    if (z5) {
                    }
                } catch (NoSuchMethodException unused5) {
                    field2 = null;
                    field3 = field2;
                    field4 = null;
                    z5 = false;
                    if (z5) {
                    }
                }
            } catch (ClassNotFoundException unused6) {
                field = null;
                field2 = field;
                field3 = field2;
                field4 = null;
                z5 = false;
                if (z5) {
                }
            } catch (NoSuchFieldException unused7) {
                field = null;
                field2 = field;
                field3 = field2;
                field4 = null;
                z5 = false;
                if (z5) {
                }
            } catch (NoSuchMethodException unused8) {
                field = null;
                field2 = field;
                field3 = field2;
                field4 = null;
                z5 = false;
                if (z5) {
                }
            }
        } catch (ClassNotFoundException unused9) {
            method = null;
            field = null;
        } catch (NoSuchFieldException unused10) {
            method = null;
            field = null;
        } catch (NoSuchMethodException unused11) {
            method = null;
            field = null;
        }
        if (z5) {
            f1028b = null;
            f1029c = null;
            f1030d = null;
            f1031e = null;
            f1032f = null;
            a = false;
            return;
        }
        f1028b = method;
        f1029c = field;
        f1030d = field2;
        f1031e = field3;
        f1032f = field4;
        a = true;
    }
}
