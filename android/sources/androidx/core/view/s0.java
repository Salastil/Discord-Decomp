package androidx.core.view;

import android.content.Context;
import android.content.res.TypedArray;
import android.os.Build;
import android.util.AttributeSet;
import android.util.Log;
import android.util.SparseArray;
import android.view.KeyEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.WindowInsets;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityManager;
import android.view.animation.PathInterpolator;
import androidx.appcompat.widget.AppCompatEditText;
import androidx.core.view.accessibility.AccessibilityViewCommand;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.R;
import java.lang.ref.WeakReference;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.WeakHashMap;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class s0 {
    public static WeakHashMap a = null;

    /* renamed from: b, reason: collision with root package name */
    public static Field f1629b = null;

    /* renamed from: c, reason: collision with root package name */
    public static boolean f1630c = false;

    /* renamed from: d, reason: collision with root package name */
    public static final int[] f1631d = {R.id.accessibility_custom_action_0, R.id.accessibility_custom_action_1, R.id.accessibility_custom_action_2, R.id.accessibility_custom_action_3, R.id.accessibility_custom_action_4, R.id.accessibility_custom_action_5, R.id.accessibility_custom_action_6, R.id.accessibility_custom_action_7, R.id.accessibility_custom_action_8, R.id.accessibility_custom_action_9, R.id.accessibility_custom_action_10, R.id.accessibility_custom_action_11, R.id.accessibility_custom_action_12, R.id.accessibility_custom_action_13, R.id.accessibility_custom_action_14, R.id.accessibility_custom_action_15, R.id.accessibility_custom_action_16, R.id.accessibility_custom_action_17, R.id.accessibility_custom_action_18, R.id.accessibility_custom_action_19, R.id.accessibility_custom_action_20, R.id.accessibility_custom_action_21, R.id.accessibility_custom_action_22, R.id.accessibility_custom_action_23, R.id.accessibility_custom_action_24, R.id.accessibility_custom_action_25, R.id.accessibility_custom_action_26, R.id.accessibility_custom_action_27, R.id.accessibility_custom_action_28, R.id.accessibility_custom_action_29, R.id.accessibility_custom_action_30, R.id.accessibility_custom_action_31};

    /* renamed from: e, reason: collision with root package name */
    public static final d0 f1632e = new d0();

    /* renamed from: f, reason: collision with root package name */
    public static final f0 f1633f = new f0();

    public static void a(View view, ViewGroup viewGroup) {
        viewGroup.getOverlay().add(view);
        View view2 = (View) view.getParent();
        Intrinsics.checkNotNullParameter(view2, "<this>");
        view2.setTag(R.id.view_tree_disjoint_parent, viewGroup);
    }

    public static a1 b(View view) {
        if (a == null) {
            a = new WeakHashMap();
        }
        a1 a1Var = (a1) a.get(view);
        if (a1Var != null) {
            return a1Var;
        }
        a1 a1Var2 = new a1(view);
        a.put(view, a1Var2);
        return a1Var2;
    }

    public static void c(View view, WindowInsetsCompat windowInsetsCompat) {
        int i5 = Build.VERSION.SDK_INT;
        WindowInsets f2 = windowInsetsCompat.f();
        if (f2 != null) {
            WindowInsets a10 = i5 >= 30 ? o0.a(view, f2) : h0.a(view, f2);
            if (a10.equals(f2)) {
                return;
            }
            WindowInsetsCompat.g(view, a10);
        }
    }

    public static boolean d(View view, KeyEvent keyEvent) {
        if (Build.VERSION.SDK_INT >= 28) {
            return false;
        }
        ArrayList arrayList = r0.f1626d;
        r0 r0Var = (r0) view.getTag(R.id.tag_unhandled_key_event_manager);
        if (r0Var == null) {
            r0Var = new r0();
            r0Var.a = null;
            r0Var.f1627b = null;
            r0Var.f1628c = null;
            view.setTag(R.id.tag_unhandled_key_event_manager, r0Var);
        }
        if (keyEvent.getAction() == 0) {
            WeakHashMap weakHashMap = r0Var.a;
            if (weakHashMap != null) {
                weakHashMap.clear();
            }
            ArrayList arrayList2 = r0.f1626d;
            if (!arrayList2.isEmpty()) {
                synchronized (arrayList2) {
                    try {
                        if (r0Var.a == null) {
                            r0Var.a = new WeakHashMap();
                        }
                        for (int size = arrayList2.size() - 1; size >= 0; size--) {
                            ArrayList arrayList3 = r0.f1626d;
                            View view2 = (View) ((WeakReference) arrayList3.get(size)).get();
                            if (view2 == null) {
                                arrayList3.remove(size);
                            } else {
                                r0Var.a.put(view2, Boolean.TRUE);
                                for (ViewParent parent = view2.getParent(); parent instanceof View; parent = parent.getParent()) {
                                    r0Var.a.put((View) parent, Boolean.TRUE);
                                }
                            }
                        }
                    } finally {
                    }
                }
            }
        }
        View a10 = r0Var.a(view);
        if (keyEvent.getAction() == 0) {
            int keyCode = keyEvent.getKeyCode();
            if (a10 != null && !KeyEvent.isModifierKey(keyCode)) {
                if (r0Var.f1627b == null) {
                    r0Var.f1627b = new SparseArray();
                }
                r0Var.f1627b.put(keyCode, new WeakReference(a10));
            }
        }
        return a10 != null;
    }

    public static b e(View view) {
        View.AccessibilityDelegate f2 = f(view);
        if (f2 == null) {
            return null;
        }
        return f2 instanceof a ? ((a) f2).a : new b(f2);
    }

    public static View.AccessibilityDelegate f(View view) {
        if (Build.VERSION.SDK_INT >= 29) {
            return n0.a(view);
        }
        if (f1630c) {
            return null;
        }
        if (f1629b == null) {
            try {
                Field declaredField = View.class.getDeclaredField("mAccessibilityDelegate");
                f1629b = declaredField;
                declaredField.setAccessible(true);
            } catch (Throwable unused) {
                f1630c = true;
                return null;
            }
        }
        try {
            Object obj = f1629b.get(view);
            if (obj instanceof View.AccessibilityDelegate) {
                return (View.AccessibilityDelegate) obj;
            }
            return null;
        } catch (Throwable unused2) {
            f1630c = true;
            return null;
        }
    }

    public static CharSequence g(View view) {
        Object tag;
        if (Build.VERSION.SDK_INT >= 28) {
            tag = m0.a(view);
        } else {
            tag = view.getTag(R.id.tag_accessibility_pane_title);
            if (!CharSequence.class.isInstance(tag)) {
                tag = null;
            }
        }
        return (CharSequence) tag;
    }

    public static ArrayList h(View view) {
        ArrayList arrayList = (ArrayList) view.getTag(R.id.tag_accessibility_actions);
        if (arrayList != null) {
            return arrayList;
        }
        ArrayList arrayList2 = new ArrayList();
        view.setTag(R.id.tag_accessibility_actions, arrayList2);
        return arrayList2;
    }

    public static String[] i(AppCompatEditText appCompatEditText) {
        return Build.VERSION.SDK_INT >= 31 ? p0.a(appCompatEditText) : (String[]) appCompatEditText.getTag(R.id.tag_on_receive_content_mime_types);
    }

    public static void j(int i5, View view) {
        AccessibilityManager accessibilityManager = (AccessibilityManager) view.getContext().getSystemService("accessibility");
        if (accessibilityManager.isEnabled()) {
            boolean z5 = g(view) != null && view.isShown() && view.getWindowVisibility() == 0;
            if (view.getAccessibilityLiveRegion() != 0 || z5) {
                AccessibilityEvent obtain = AccessibilityEvent.obtain();
                obtain.setEventType(z5 ? 32 : RecyclerView.ItemAnimator.FLAG_MOVED);
                obtain.setContentChangeTypes(i5);
                if (z5) {
                    obtain.getText().add(g(view));
                    if (view.getImportantForAccessibility() == 0) {
                        view.setImportantForAccessibility(1);
                    }
                }
                view.sendAccessibilityEventUnchecked(obtain);
                return;
            }
            if (i5 != 32) {
                if (view.getParent() != null) {
                    try {
                        view.getParent().notifySubtreeAccessibilityStateChanged(view, view, i5);
                        return;
                    } catch (AbstractMethodError e9) {
                        Log.e("ViewCompat", view.getParent().getClass().getSimpleName().concat(" does not fully implement ViewParent"), e9);
                        return;
                    }
                }
                return;
            }
            AccessibilityEvent obtain2 = AccessibilityEvent.obtain();
            view.onInitializeAccessibilityEvent(obtain2);
            obtain2.setEventType(32);
            obtain2.setContentChangeTypes(i5);
            obtain2.setSource(view);
            view.onPopulateAccessibilityEvent(obtain2);
            obtain2.getText().add(g(view));
            accessibilityManager.sendAccessibilityEvent(obtain2);
        }
    }

    public static WindowInsetsCompat k(View view, WindowInsetsCompat windowInsetsCompat) {
        WindowInsets f2 = windowInsetsCompat.f();
        if (f2 != null) {
            WindowInsets b10 = h0.b(view, f2);
            if (!b10.equals(f2)) {
                return WindowInsetsCompat.g(view, b10);
            }
        }
        return windowInsetsCompat;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static ContentInfoCompat l(View view, ContentInfoCompat contentInfoCompat) {
        if (Log.isLoggable("ViewCompat", 3)) {
            Log.d("ViewCompat", "performReceiveContent: " + contentInfoCompat + ", view=" + view.getClass().getSimpleName() + "[" + view.getId() + "]");
        }
        if (Build.VERSION.SDK_INT >= 31) {
            return p0.b(view, contentInfoCompat);
        }
        s sVar = (s) view.getTag(R.id.tag_on_receive_content_listener);
        t tVar = f1632e;
        if (sVar == null) {
            if (view instanceof t) {
                tVar = (t) view;
            }
            return tVar.onReceiveContent(contentInfoCompat);
        }
        ContentInfoCompat a10 = sVar.a(view, contentInfoCompat);
        if (a10 == null) {
            return null;
        }
        if (view instanceof t) {
            tVar = (t) view;
        }
        return tVar.onReceiveContent(a10);
    }

    public static void m(int i5, View view) {
        ArrayList h6 = h(view);
        for (int i6 = 0; i6 < h6.size(); i6++) {
            if (((androidx.core.view.accessibility.a) h6.get(i6)).a() == i5) {
                h6.remove(i6);
                return;
            }
        }
    }

    public static void n(View view, androidx.core.view.accessibility.a aVar, CharSequence charSequence, AccessibilityViewCommand accessibilityViewCommand) {
        if (accessibilityViewCommand == null && charSequence == null) {
            m(aVar.a(), view);
            j(0, view);
            return;
        }
        androidx.core.view.accessibility.a aVar2 = new androidx.core.view.accessibility.a(null, aVar.f1564b, charSequence, accessibilityViewCommand, aVar.f1565c);
        b e9 = e(view);
        if (e9 == null) {
            e9 = new b();
        }
        p(view, e9);
        m(aVar2.a(), view);
        h(view).add(aVar2);
        j(0, view);
    }

    public static void o(View view, Context context, int[] iArr, AttributeSet attributeSet, TypedArray typedArray, int i5, int i6) {
        if (Build.VERSION.SDK_INT >= 29) {
            n0.b(view, context, iArr, attributeSet, typedArray, i5, i6);
        }
    }

    public static void p(View view, b bVar) {
        if (bVar == null && (f(view) instanceof a)) {
            bVar = new b();
        }
        if (view.getImportantForAccessibility() == 0) {
            view.setImportantForAccessibility(1);
        }
        view.setAccessibilityDelegate(bVar == null ? null : bVar.getBridge());
    }

    public static void q(View view, CharSequence charSequence) {
        new e0(R.id.tag_accessibility_pane_title, CharSequence.class, 8, 28, 1).f(view, charSequence);
        f0 f0Var = f1633f;
        if (charSequence == null) {
            f0Var.f1585d.remove(view);
            view.removeOnAttachStateChangeListener(f0Var);
            view.getViewTreeObserver().removeOnGlobalLayoutListener(f0Var);
        } else {
            f0Var.f1585d.put(view, Boolean.valueOf(view.isShown() && view.getWindowVisibility() == 0));
            view.addOnAttachStateChangeListener(f0Var);
            if (view.isAttachedToWindow()) {
                view.getViewTreeObserver().addOnGlobalLayoutListener(f0Var);
            }
        }
    }

    public static void r(View view, d1 d1Var) {
        if (Build.VERSION.SDK_INT >= 30) {
            k1.g(view, d1Var);
            return;
        }
        PathInterpolator pathInterpolator = h1.f1596e;
        View.OnApplyWindowInsetsListener g1Var = d1Var != null ? new g1(view, d1Var) : null;
        view.setTag(R.id.tag_window_insets_animation_callback, g1Var);
        if (view.getTag(R.id.tag_compat_insets_dispatch) == null && view.getTag(R.id.tag_on_apply_window_listener) == null) {
            view.setOnApplyWindowInsetsListener(g1Var);
        }
    }
}
