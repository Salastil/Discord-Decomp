package z0;

import android.content.Context;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.content.pm.ShortcutInfo;
import android.content.pm.ShortcutManager;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Insets;
import android.graphics.Rect;
import android.graphics.drawable.Icon;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.ext.SdkExtensions;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowInsets;
import android.view.accessibility.AccessibilityNodeInfo;
import androidx.core.content.pm.ShortcutInfoCompat;
import androidx.core.graphics.drawable.IconCompat;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import fo.n;
import g.e;
import g.f;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import s4.h;

/* loaded from: classes.dex */
public abstract class d {
    public static volatile c a;

    /* renamed from: b, reason: collision with root package name */
    public static volatile ArrayList f21123b;

    public static Icon a(Uri uri) {
        return Icon.createWithAdaptiveBitmapContentUri(uri);
    }

    public static final tn.b b(View view, ViewGroup rootView) {
        Intrinsics.checkNotNullParameter(rootView, "rootView");
        Intrinsics.checkNotNullParameter(view, "view");
        if (view.getParent() == null) {
            return null;
        }
        Rect rect = new Rect();
        view.getDrawingRect(rect);
        try {
            rootView.offsetDescendantRectToMyCoords(view, rect);
            return new tn.b(rect.left, rect.top, view.getWidth(), view.getHeight());
        } catch (IllegalArgumentException e9) {
            e9.printStackTrace();
            return null;
        }
    }

    public static final tn.a c(View view) {
        tn.a aVar;
        Insets insets;
        int i5;
        int i6;
        int i10;
        int i11;
        Intrinsics.checkNotNullParameter(view, "view");
        if (view.getHeight() == 0) {
            return null;
        }
        View rootView = view.getRootView();
        Intrinsics.checkNotNull(rootView);
        if (Build.VERSION.SDK_INT >= 30) {
            WindowInsets rootWindowInsets = rootView.getRootWindowInsets();
            if (rootWindowInsets != null && (insets = rootWindowInsets.getInsets(WindowInsets.Type.statusBars() | WindowInsets.Type.displayCutout() | WindowInsets.Type.navigationBars() | WindowInsets.Type.captionBar() | WindowInsets.Type.ime())) != null) {
                i5 = insets.top;
                i6 = insets.right;
                i10 = insets.bottom;
                i11 = insets.left;
                aVar = new tn.a(i5, i6, i10, i11);
            }
            aVar = null;
        } else {
            if (rootView.getRootWindowInsets() != null) {
                aVar = new tn.a(r2.getSystemWindowInsetTop(), r2.getSystemWindowInsetRight(), Math.min(r2.getSystemWindowInsetBottom(), r2.getStableInsetBottom()), r2.getSystemWindowInsetLeft());
            }
            aVar = null;
        }
        if (aVar == null) {
            return null;
        }
        float width = rootView.getWidth();
        float height = rootView.getHeight();
        view.getGlobalVisibleRect(new Rect());
        return new tn.a(Math.max(aVar.a - r2.top, 0.0f), Math.max(Math.min((view.getWidth() + r2.left) - width, 0.0f) + aVar.f18656b, 0.0f), Math.max(Math.min((view.getHeight() + r2.top) - height, 0.0f) + aVar.f18657c, 0.0f), Math.max(aVar.f18658d - r2.left, 0.0f));
    }

    public static List d(Context context) {
        Bundle bundle;
        String string;
        if (f21123b == null) {
            ArrayList arrayList = new ArrayList();
            PackageManager packageManager = context.getPackageManager();
            Intent intent = new Intent("androidx.core.content.pm.SHORTCUT_LISTENER");
            intent.setPackage(context.getPackageName());
            Iterator<ResolveInfo> it = packageManager.queryIntentActivities(intent, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT).iterator();
            while (it.hasNext()) {
                ActivityInfo activityInfo = it.next().activityInfo;
                if (activityInfo != null && (bundle = activityInfo.metaData) != null && (string = bundle.getString("androidx.core.content.pm.shortcut_listener_impl")) != null) {
                    try {
                        if (Class.forName(string, false, d.class.getClassLoader()).getMethod("getInstance", Context.class).invoke(null, context) != null) {
                            throw new ClassCastException();
                        }
                        arrayList.add(null);
                    } catch (Exception unused) {
                        continue;
                    }
                }
            }
            if (f21123b == null) {
                f21123b = arrayList;
            }
        }
        return f21123b;
    }

    public static c e(Context context) {
        if (a == null) {
            try {
                a = (c) Class.forName("f3.f", false, d.class.getClassLoader()).getMethod("getInstance", Context.class).invoke(null, context);
            } catch (Exception unused) {
            }
            if (a == null) {
                a = new b();
            }
        }
        return a;
    }

    public static List f(Context context) {
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 30) {
            return ShortcutInfoCompat.a(context, ((ShortcutManager) context.getSystemService(ShortcutManager.class)).getShortcuts(10));
        }
        if (i5 < 25) {
            try {
                return e(context).b();
            } catch (Exception unused) {
                return Collections.EMPTY_LIST;
            }
        }
        ShortcutManager shortcutManager = (ShortcutManager) context.getSystemService(ShortcutManager.class);
        ArrayList arrayList = new ArrayList();
        arrayList.addAll(shortcutManager.getDynamicShortcuts());
        return ShortcutInfoCompat.a(context, arrayList);
    }

    public static CharSequence g(AccessibilityNodeInfo accessibilityNodeInfo) {
        return accessibilityNodeInfo.getStateDescription();
    }

    public static ResolveInfo h(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        return context.getPackageManager().resolveActivity(new Intent("androidx.activity.result.contract.action.PICK_IMAGES"), 1114112);
    }

    public static String i(f input) {
        Intrinsics.checkNotNullParameter(input, "input");
        if (input instanceof g.d) {
            return "image/*";
        }
        if (input instanceof e) {
            return "video/*";
        }
        if (input instanceof g.c) {
            return null;
        }
        throw new n();
    }

    public static boolean j() {
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 33) {
            return true;
        }
        return i5 >= 30 && SdkExtensions.getExtensionVersion(30) >= 2;
    }

    public static void k(Context context, ShortcutInfoCompat shortcutInfoCompat) {
        IconCompat iconCompat;
        int i5;
        InputStream h6;
        Bitmap decodeStream;
        IconCompat c6;
        context.getClass();
        shortcutInfoCompat.getClass();
        int i6 = Build.VERSION.SDK_INT;
        int maxShortcutCountPerActivity = i6 >= 25 ? ((ShortcutManager) context.getSystemService(ShortcutManager.class)).getMaxShortcutCountPerActivity() : 5;
        if (maxShortcutCountPerActivity == 0) {
            return;
        }
        if (i6 <= 29 && (iconCompat = shortcutInfoCompat.f1506h) != null && (((i5 = iconCompat.a) == 6 || i5 == 4) && (h6 = iconCompat.h(context)) != null && (decodeStream = BitmapFactory.decodeStream(h6)) != null)) {
            if (i5 == 6) {
                c6 = new IconCompat(5);
                c6.f1515b = decodeStream;
            } else {
                c6 = IconCompat.c(decodeStream);
            }
            shortcutInfoCompat.f1506h = c6;
        }
        int i10 = -1;
        if (i6 >= 30) {
            ((ShortcutManager) context.getSystemService(ShortcutManager.class)).pushDynamicShortcut(shortcutInfoCompat.b());
        } else if (i6 >= 25) {
            ShortcutManager shortcutManager = (ShortcutManager) context.getSystemService(ShortcutManager.class);
            if (shortcutManager.isRateLimitingActive()) {
                return;
            }
            List<ShortcutInfo> dynamicShortcuts = shortcutManager.getDynamicShortcuts();
            if (dynamicShortcuts.size() >= maxShortcutCountPerActivity) {
                int i11 = -1;
                String str = null;
                for (ShortcutInfo shortcutInfo : dynamicShortcuts) {
                    if (shortcutInfo.getRank() > i11) {
                        str = shortcutInfo.getId();
                        i11 = shortcutInfo.getRank();
                    }
                }
                shortcutManager.removeDynamicShortcuts(Arrays.asList(str));
            }
            shortcutManager.addDynamicShortcuts(Arrays.asList(shortcutInfoCompat.b()));
        }
        c e9 = e(context);
        try {
            List<ShortcutInfoCompat> b10 = e9.b();
            if (b10.size() >= maxShortcutCountPerActivity) {
                String str2 = null;
                for (ShortcutInfoCompat shortcutInfoCompat2 : b10) {
                    int i12 = shortcutInfoCompat2.f1509m;
                    if (i12 > i10) {
                        str2 = shortcutInfoCompat2.f1500b;
                        i10 = i12;
                    }
                }
                e9.d(Arrays.asList(str2));
            }
            e9.a(Arrays.asList(shortcutInfoCompat));
            Iterator it = ((ArrayList) d(context)).iterator();
            if (it.hasNext()) {
                if (it.next() != null) {
                    throw new ClassCastException();
                }
                Collections.singletonList(shortcutInfoCompat);
                throw null;
            }
        } catch (Exception unused) {
            Iterator it2 = ((ArrayList) d(context)).iterator();
            if (it2.hasNext()) {
                if (it2.next() != null) {
                    throw new ClassCastException();
                }
                Collections.singletonList(shortcutInfoCompat);
                throw null;
            }
        } catch (Throwable th2) {
            Iterator it3 = ((ArrayList) d(context)).iterator();
            if (!it3.hasNext()) {
                m(context, shortcutInfoCompat.f1500b);
                throw th2;
            }
            if (it3.next() != null) {
                throw new ClassCastException();
            }
            Collections.singletonList(shortcutInfoCompat);
            throw null;
        }
        m(context, shortcutInfoCompat.f1500b);
    }

    public static void l(Context context) {
        if (Build.VERSION.SDK_INT >= 25) {
            u3.e.d(context.getSystemService(u3.e.e())).removeAllDynamicShortcuts();
        }
        e(context).c();
        Iterator it = ((ArrayList) d(context)).iterator();
        if (it.hasNext()) {
            throw h.b(it);
        }
    }

    public static void m(Context context, String str) {
        context.getClass();
        str.getClass();
        if (Build.VERSION.SDK_INT >= 25) {
            u3.e.d(context.getSystemService(u3.e.e())).reportShortcutUsed(str);
        }
        Iterator it = ((ArrayList) d(context)).iterator();
        if (it.hasNext()) {
            if (it.next() != null) {
                throw new ClassCastException();
            }
            Collections.singletonList(str);
            throw null;
        }
    }

    public static void n(Window window, boolean z5) {
        View decorView = window.getDecorView();
        int systemUiVisibility = decorView.getSystemUiVisibility();
        decorView.setSystemUiVisibility(z5 ? systemUiVisibility & (-257) : systemUiVisibility | IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER);
        window.setDecorFitsSystemWindows(z5);
    }

    public static void o(Window window, boolean z5) {
        window.setDecorFitsSystemWindows(z5);
    }

    public static void p(AccessibilityNodeInfo accessibilityNodeInfo, CharSequence charSequence) {
        accessibilityNodeInfo.setStateDescription(charSequence);
    }
}
