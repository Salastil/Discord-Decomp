package androidx.appcompat.app;

import a1.b;
import android.R;
import android.app.Activity;
import android.app.Dialog;
import android.app.UiModeManager;
import android.content.ComponentName;
import android.content.Context;
import android.content.ContextWrapper;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageManager;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.location.LocationManager;
import android.media.AudioManager;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.LocaleList;
import android.text.TextUtils;
import android.util.AndroidRuntimeException;
import android.util.AttributeSet;
import android.util.Log;
import android.util.LongSparseArray;
import android.util.TypedValue;
import android.view.KeyCharacterMap;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.Window;
import android.view.WindowManager;
import android.widget.FrameLayout;
import android.widget.ListAdapter;
import android.widget.PopupWindow;
import android.widget.TextView;
import android.window.OnBackInvokedCallback;
import android.window.OnBackInvokedDispatcher;
import androidx.appcompat.view.ActionMode;
import androidx.appcompat.view.ContextThemeWrapper;
import androidx.appcompat.view.menu.ExpandedMenuView;
import androidx.appcompat.widget.ActionBarContextView;
import androidx.appcompat.widget.ActionBarOverlayLayout;
import androidx.appcompat.widget.ActionMenuView;
import androidx.appcompat.widget.ContentFrameLayout;
import androidx.appcompat.widget.Toolbar;
import androidx.appcompat.widget.ViewStubCompat;
import androidx.appcompat.widget.f4;
import androidx.appcompat.widget.j1;
import androidx.appcompat.widget.n;
import androidx.appcompat.widget.n2;
import androidx.appcompat.widget.x3;
import androidx.collection.SimpleArrayMap;
import androidx.core.os.LocaleListCompat;
import androidx.core.view.a1;
import androidx.core.view.h0;
import androidx.core.view.s0;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleOwner;
import com.facebook.imageutils.JfifUtil;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.reactnativecommunity.webview.RNCWebViewManager;
import f1.d;
import gj.c;
import ha.l;
import i.b0;
import i.e0;
import i.i;
import i.j0;
import i.m;
import i.o;
import i.p;
import i.q;
import i.s;
import i.t;
import i.u;
import i.v;
import i.w;
import i.x;
import i.z;
import java.lang.ref.WeakReference;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.LinkedHashSet;
import java.util.Locale;
import java.util.WeakHashMap;
import m.e;
import n.f;
import n.h;
import n.j;
import org.webrtc.MediaStreamTrack;
import s.k;

/* loaded from: classes.dex */
public final class a extends AppCompatDelegate implements h, LayoutInflater.Factory2 {
    public static final SimpleArrayMap E0 = new SimpleArrayMap(0);
    public static final int[] F0 = {R.attr.windowBackground};
    public static final boolean G0 = !"robolectric".equals(Build.FINGERPRINT);
    public Rect A0;
    public b0 B0;
    public OnBackInvokedDispatcher C0;
    public OnBackInvokedCallback D0;
    public final Object G;
    public final Context H;
    public Window I;
    public u J;
    public final Object K;
    public ActionBar L;
    public e M;
    public CharSequence N;
    public j1 O;
    public c P;
    public l Q;
    public ActionMode R;
    public ActionBarContextView S;
    public PopupWindow T;
    public o U;
    public boolean W;
    public ViewGroup X;
    public TextView Y;
    public View Z;
    public boolean a0;

    /* renamed from: b0, reason: collision with root package name */
    public boolean f767b0;

    /* renamed from: c0, reason: collision with root package name */
    public boolean f768c0;

    /* renamed from: d0, reason: collision with root package name */
    public boolean f769d0;

    /* renamed from: e0, reason: collision with root package name */
    public boolean f770e0;

    /* renamed from: f0, reason: collision with root package name */
    public boolean f771f0;

    /* renamed from: g0, reason: collision with root package name */
    public boolean f772g0;
    public boolean h0;

    /* renamed from: i0, reason: collision with root package name */
    public x[] f773i0;

    /* renamed from: j0, reason: collision with root package name */
    public x f774j0;

    /* renamed from: k0, reason: collision with root package name */
    public boolean f775k0;

    /* renamed from: l0, reason: collision with root package name */
    public boolean f776l0;

    /* renamed from: m0, reason: collision with root package name */
    public boolean f777m0;

    /* renamed from: n0, reason: collision with root package name */
    public boolean f778n0;

    /* renamed from: o0, reason: collision with root package name */
    public Configuration f779o0;

    /* renamed from: p0, reason: collision with root package name */
    public final int f780p0;

    /* renamed from: q0, reason: collision with root package name */
    public int f781q0;

    /* renamed from: r0, reason: collision with root package name */
    public int f782r0;

    /* renamed from: s0, reason: collision with root package name */
    public boolean f783s0;

    /* renamed from: t0, reason: collision with root package name */
    public v f784t0;

    /* renamed from: u0, reason: collision with root package name */
    public v f785u0;

    /* renamed from: v0, reason: collision with root package name */
    public boolean f786v0;

    /* renamed from: w0, reason: collision with root package name */
    public int f787w0;

    /* renamed from: y0, reason: collision with root package name */
    public boolean f789y0;

    /* renamed from: z0, reason: collision with root package name */
    public Rect f790z0;
    public a1 V = null;

    /* renamed from: x0, reason: collision with root package name */
    public final a3.h f788x0 = new a3.h(18, this);

    public a(Context context, Window window, i iVar, Object obj) {
        i.h hVar = null;
        this.f780p0 = -100;
        this.H = context;
        this.K = iVar;
        this.G = obj;
        if (obj instanceof Dialog) {
            while (true) {
                if (context != null) {
                    if (!(context instanceof i.h)) {
                        if (!(context instanceof ContextWrapper)) {
                            break;
                        } else {
                            context = ((ContextWrapper) context).getBaseContext();
                        }
                    } else {
                        hVar = (i.h) context;
                        break;
                    }
                } else {
                    break;
                }
            }
            if (hVar != null) {
                this.f780p0 = hVar.getDelegate().g();
            }
        }
        if (this.f780p0 == -100) {
            String name = this.G.getClass().getName();
            SimpleArrayMap simpleArrayMap = E0;
            Integer num = (Integer) simpleArrayMap.get(name);
            if (num != null) {
                this.f780p0 = num.intValue();
                simpleArrayMap.remove(this.G.getClass().getName());
            }
        }
        if (window != null) {
            G(window);
        }
        androidx.appcompat.widget.x.d();
    }

    public static LocaleListCompat H(Context context) {
        LocaleListCompat localeListCompat;
        LocaleListCompat localeListCompat2;
        if (Build.VERSION.SDK_INT >= 33 || (localeListCompat = AppCompatDelegate.f762i) == null) {
            return null;
        }
        d dVar = localeListCompat.a;
        LocaleListCompat b10 = s.b(context.getApplicationContext().getResources().getConfiguration());
        if (dVar.a.isEmpty()) {
            localeListCompat2 = LocaleListCompat.f1523b;
        } else {
            LinkedHashSet linkedHashSet = new LinkedHashSet();
            int i5 = 0;
            while (i5 < b10.a.a.size() + dVar.a.size()) {
                Locale locale = i5 < dVar.a.size() ? dVar.a.get(i5) : b10.a.a.get(i5 - dVar.a.size());
                if (locale != null) {
                    linkedHashSet.add(locale);
                }
                i5++;
            }
            localeListCompat2 = new LocaleListCompat(new d(new LocaleList((Locale[]) linkedHashSet.toArray(new Locale[linkedHashSet.size()]))));
        }
        return localeListCompat2.a.a.isEmpty() ? b10 : localeListCompat2;
    }

    public static Configuration L(Context context, int i5, LocaleListCompat localeListCompat, Configuration configuration, boolean z5) {
        int i6 = i5 != 1 ? i5 != 2 ? z5 ? 0 : context.getApplicationContext().getResources().getConfiguration().uiMode & 48 : 32 : 16;
        Configuration configuration2 = new Configuration();
        configuration2.fontScale = 0.0f;
        if (configuration != null) {
            configuration2.setTo(configuration);
        }
        configuration2.uiMode = i6 | (configuration2.uiMode & (-49));
        if (localeListCompat != null) {
            s.d(configuration2, localeListCompat);
        }
        return configuration2;
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final void B(Toolbar toolbar) {
        Object obj = this.G;
        if (obj instanceof Activity) {
            S();
            ActionBar actionBar = this.L;
            if (actionBar instanceof j0) {
                throw new IllegalStateException("This Activity already has an action bar supplied by the window decor. Do not request Window.FEATURE_SUPPORT_ACTION_BAR and set windowActionBar to false in your theme to use a Toolbar instead.");
            }
            this.M = null;
            if (actionBar != null) {
                actionBar.h();
            }
            this.L = null;
            if (toolbar != null) {
                e0 e0Var = new e0(toolbar, obj instanceof Activity ? ((Activity) obj).getTitle() : this.N, this.J);
                this.L = e0Var;
                this.J.f10354e = e0Var.f10304c;
                toolbar.setBackInvokedCallbackEnabled(true);
            } else {
                this.J.f10354e = null;
            }
            l();
        }
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final void C(int i5) {
        this.f781q0 = i5;
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final void D(CharSequence charSequence) {
        this.N = charSequence;
        j1 j1Var = this.O;
        if (j1Var != null) {
            j1Var.setWindowTitle(charSequence);
            return;
        }
        ActionBar actionBar = this.L;
        if (actionBar != null) {
            actionBar.r(charSequence);
            return;
        }
        TextView textView = this.Y;
        if (textView != null) {
            textView.setText(charSequence);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:22:0x0041  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x01a0  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0045  */
    /* JADX WARN: Type inference failed for: r1v0, types: [i.i, java.lang.Object] */
    @Override // androidx.appcompat.app.AppCompatDelegate
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final ActionMode E(ActionMode.Callback callback) {
        ActionMode onWindowStartingSupportActionMode;
        ViewGroup viewGroup;
        ActionMode actionMode;
        if (callback == null) {
            throw new IllegalArgumentException("ActionMode callback can not be null.");
        }
        ActionMode actionMode2 = this.R;
        if (actionMode2 != null) {
            actionMode2.a();
        }
        q qVar = new q(this, callback);
        S();
        ActionBar actionBar = this.L;
        ?? r12 = this.K;
        if (actionBar != null) {
            ActionMode s2 = actionBar.s(qVar);
            this.R = s2;
            if (s2 != null) {
                r12.onSupportActionModeStarted(s2);
            }
        }
        if (this.R == null) {
            a1 a1Var = this.V;
            if (a1Var != null) {
                a1Var.b();
            }
            ActionMode actionMode3 = this.R;
            if (actionMode3 != null) {
                actionMode3.a();
            }
            if (!this.f778n0) {
                try {
                    onWindowStartingSupportActionMode = r12.onWindowStartingSupportActionMode(qVar);
                } catch (AbstractMethodError unused) {
                }
                if (onWindowStartingSupportActionMode == null) {
                    this.R = onWindowStartingSupportActionMode;
                } else {
                    if (this.S == null) {
                        boolean z5 = this.f771f0;
                        Context context = this.H;
                        if (z5) {
                            TypedValue typedValue = new TypedValue();
                            Resources.Theme theme = context.getTheme();
                            theme.resolveAttribute(com.discord.R.attr.actionBarTheme, typedValue, true);
                            if (typedValue.resourceId != 0) {
                                Resources.Theme newTheme = context.getResources().newTheme();
                                newTheme.setTo(theme);
                                newTheme.applyStyle(typedValue.resourceId, true);
                                ContextThemeWrapper contextThemeWrapper = new ContextThemeWrapper(context, 0);
                                contextThemeWrapper.getTheme().setTo(newTheme);
                                context = contextThemeWrapper;
                            }
                            this.S = new ActionBarContextView(context, null);
                            PopupWindow popupWindow = new PopupWindow(context, (AttributeSet) null, com.discord.R.attr.actionModePopupWindowStyle);
                            this.T = popupWindow;
                            popupWindow.setWindowLayoutType(2);
                            this.T.setContentView(this.S);
                            this.T.setWidth(-1);
                            context.getTheme().resolveAttribute(com.discord.R.attr.actionBarSize, typedValue, true);
                            this.S.setContentHeight(TypedValue.complexToDimensionPixelSize(typedValue.data, context.getResources().getDisplayMetrics()));
                            this.T.setHeight(-2);
                            this.U = new o(this);
                        } else {
                            ViewStubCompat viewStubCompat = (ViewStubCompat) this.X.findViewById(com.discord.R.id.action_mode_bar_stub);
                            if (viewStubCompat != null) {
                                S();
                                ActionBar actionBar2 = this.L;
                                Context e9 = actionBar2 != null ? actionBar2.e() : null;
                                if (e9 != null) {
                                    context = e9;
                                }
                                viewStubCompat.setLayoutInflater(LayoutInflater.from(context));
                                this.S = (ActionBarContextView) viewStubCompat.a();
                            }
                        }
                    }
                    if (this.S != null) {
                        a1 a1Var2 = this.V;
                        if (a1Var2 != null) {
                            a1Var2.b();
                        }
                        this.S.e();
                        Context context2 = this.S.getContext();
                        ActionBarContextView actionBarContextView = this.S;
                        androidx.appcompat.view.a aVar = new androidx.appcompat.view.a();
                        aVar.f798i = context2;
                        aVar.f799v = actionBarContextView;
                        aVar.f800w = qVar;
                        j jVar = new j(actionBarContextView.getContext());
                        jVar.f14655l = 1;
                        aVar.E = jVar;
                        jVar.f14650e = aVar;
                        if (qVar.a.b(aVar, jVar)) {
                            aVar.g();
                            this.S.c(aVar);
                            this.R = aVar;
                            if (this.W && (viewGroup = this.X) != null && viewGroup.isLaidOut()) {
                                this.S.setAlpha(0.0f);
                                a1 b10 = s0.b(this.S);
                                b10.a(1.0f);
                                this.V = b10;
                                b10.d(new p(this));
                            } else {
                                this.S.setAlpha(1.0f);
                                this.S.setVisibility(0);
                                if (this.S.getParent() instanceof View) {
                                    View view = (View) this.S.getParent();
                                    WeakHashMap weakHashMap = s0.a;
                                    h0.c(view);
                                }
                            }
                            if (this.T != null) {
                                this.I.getDecorView().post(this.U);
                            }
                        } else {
                            this.R = null;
                        }
                    }
                }
                actionMode = this.R;
                if (actionMode != null) {
                    r12.onSupportActionModeStarted(actionMode);
                }
                a0();
                this.R = this.R;
            }
            onWindowStartingSupportActionMode = null;
            if (onWindowStartingSupportActionMode == null) {
            }
            actionMode = this.R;
            if (actionMode != null) {
            }
            a0();
            this.R = this.R;
        }
        a0();
        return this.R;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:150:0x022d  */
    /* JADX WARN: Removed duplicated region for block: B:154:0x0235  */
    /* JADX WARN: Removed duplicated region for block: B:157:0x023f  */
    /* JADX WARN: Removed duplicated region for block: B:159:0x0246  */
    /* JADX WARN: Removed duplicated region for block: B:161:0x0257  */
    /* JADX WARN: Removed duplicated region for block: B:164:0x0269  */
    /* JADX WARN: Removed duplicated region for block: B:169:0x027a  */
    /* JADX WARN: Removed duplicated region for block: B:172:0x025f  */
    /* JADX WARN: Removed duplicated region for block: B:180:0x009b  */
    /* JADX WARN: Removed duplicated region for block: B:181:0x0092  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x007a  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0090  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x0098  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x00c7  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x00fd A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:79:0x0197  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean F(boolean z5, boolean z6) {
        int i5;
        Configuration configuration;
        LocaleListCompat b10;
        int i6;
        boolean z7;
        boolean z8;
        boolean z10;
        Object obj;
        Object obj2;
        Activity activity;
        if (this.f778n0) {
            return false;
        }
        int i10 = this.f780p0;
        if (i10 == -100) {
            i10 = AppCompatDelegate.f761e;
        }
        Context context = this.H;
        int U = U(context, i10);
        int i11 = Build.VERSION.SDK_INT;
        LongSparseArray longSparseArray = null;
        LocaleListCompat H = i11 < 33 ? H(context) : null;
        if (!z6 && H != null) {
            H = s.b(context.getResources().getConfiguration());
        }
        Configuration L = L(context, U, H, null, false);
        boolean z11 = this.f783s0;
        Object obj3 = this.G;
        if (!z11 && (obj3 instanceof Activity)) {
            PackageManager packageManager = context.getPackageManager();
            if (packageManager == null) {
                i5 = 0;
                configuration = this.f779o0;
                if (configuration == null) {
                    configuration = context.getResources().getConfiguration();
                }
                int i12 = configuration.uiMode & 48;
                int i13 = L.uiMode & 48;
                LocaleListCompat b11 = s.b(configuration);
                b10 = H != null ? null : s.b(L);
                i6 = i12 == i13 ? IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING : 0;
                if (b10 != null && !b11.equals(b10)) {
                    i6 |= 8196;
                }
                if (((~i5) & i6) != 0 && z5 && this.f776l0 && ((G0 || this.f777m0) && (obj3 instanceof Activity))) {
                    activity = (Activity) obj3;
                    if (!activity.isChild()) {
                        int i14 = Build.VERSION.SDK_INT;
                        if (i14 >= 31 && (i6 & 8192) != 0) {
                            activity.getWindow().getDecorView().setLayoutDirection(L.getLayoutDirection());
                        }
                        if (i14 >= 28) {
                            activity.recreate();
                        } else {
                            new Handler(activity.getMainLooper()).post(new com.discord.share.a(activity, 2));
                        }
                        z7 = true;
                        if (!z7 || i6 == 0) {
                            z8 = z7;
                        } else {
                            boolean z12 = (i5 & i6) == i6;
                            Resources resources = context.getResources();
                            Configuration configuration2 = new Configuration(resources.getConfiguration());
                            configuration2.uiMode = (resources.getConfiguration().uiMode & (-49)) | i13;
                            if (b10 != null) {
                                s.d(configuration2, b10);
                            }
                            resources.updateConfiguration(configuration2, null);
                            int i15 = Build.VERSION.SDK_INT;
                            if (i15 < 26 && i15 < 28) {
                                if (!zk.a.f21277i) {
                                    try {
                                        Field declaredField = Resources.class.getDeclaredField("mResourcesImpl");
                                        zk.a.f21276h = declaredField;
                                        declaredField.setAccessible(true);
                                    } catch (NoSuchFieldException e9) {
                                        Log.e("ResourcesFlusher", "Could not retrieve Resources#mResourcesImpl field", e9);
                                    }
                                    zk.a.f21277i = true;
                                }
                                Field field = zk.a.f21276h;
                                if (field != null) {
                                    try {
                                        obj = field.get(resources);
                                    } catch (IllegalAccessException e10) {
                                        Log.e("ResourcesFlusher", "Could not retrieve value from Resources#mResourcesImpl", e10);
                                        obj = null;
                                    }
                                    if (obj != null) {
                                        if (!zk.a.f21271c) {
                                            try {
                                                Field declaredField2 = obj.getClass().getDeclaredField("mDrawableCache");
                                                zk.a.f21270b = declaredField2;
                                                declaredField2.setAccessible(true);
                                            } catch (NoSuchFieldException e11) {
                                                Log.e("ResourcesFlusher", "Could not retrieve ResourcesImpl#mDrawableCache field", e11);
                                            }
                                            zk.a.f21271c = true;
                                        }
                                        Field field2 = zk.a.f21270b;
                                        if (field2 != null) {
                                            try {
                                                obj2 = field2.get(obj);
                                            } catch (IllegalAccessException e12) {
                                                Log.e("ResourcesFlusher", "Could not retrieve value from ResourcesImpl#mDrawableCache", e12);
                                            }
                                            if (obj2 != null) {
                                                if (!zk.a.f21273e) {
                                                    try {
                                                        zk.a.f21272d = Class.forName("android.content.res.ThemedResourceCache");
                                                    } catch (ClassNotFoundException e13) {
                                                        Log.e("ResourcesFlusher", "Could not find ThemedResourceCache class", e13);
                                                    }
                                                    zk.a.f21273e = true;
                                                }
                                                Class cls = zk.a.f21272d;
                                                if (cls != null) {
                                                    if (!zk.a.f21275g) {
                                                        try {
                                                            Field declaredField3 = cls.getDeclaredField("mUnthemedEntries");
                                                            zk.a.f21274f = declaredField3;
                                                            declaredField3.setAccessible(true);
                                                        } catch (NoSuchFieldException e14) {
                                                            Log.e("ResourcesFlusher", "Could not retrieve ThemedResourceCache#mUnthemedEntries field", e14);
                                                        }
                                                        zk.a.f21275g = true;
                                                    }
                                                    Field field3 = zk.a.f21274f;
                                                    if (field3 != null) {
                                                        try {
                                                            longSparseArray = (LongSparseArray) field3.get(obj2);
                                                        } catch (IllegalAccessException e15) {
                                                            Log.e("ResourcesFlusher", "Could not retrieve value from ThemedResourceCache#mUnthemedEntries", e15);
                                                        }
                                                        if (longSparseArray != null) {
                                                            longSparseArray.clear();
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        obj2 = null;
                                        if (obj2 != null) {
                                        }
                                    }
                                }
                            }
                            int i16 = this.f781q0;
                            if (i16 != 0) {
                                context.setTheme(i16);
                                z10 = true;
                                context.getTheme().applyStyle(this.f781q0, true);
                            } else {
                                z10 = true;
                            }
                            if (z12 && (obj3 instanceof Activity)) {
                                Activity activity2 = (Activity) obj3;
                                if (activity2 instanceof LifecycleOwner) {
                                    if (((LifecycleOwner) activity2).getLifecycle().b().a(Lifecycle.State.f2139i)) {
                                        activity2.onConfigurationChanged(configuration2);
                                    }
                                } else if (this.f777m0 && !this.f778n0) {
                                    activity2.onConfigurationChanged(configuration2);
                                }
                            }
                            z8 = z10;
                        }
                        if (z8 && (obj3 instanceof i.h)) {
                            if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0) {
                                ((i.h) obj3).onNightModeChanged(U);
                            }
                            if ((i6 & 4) != 0) {
                                ((i.h) obj3).onLocalesChanged(H);
                            }
                        }
                        if (b10 != null) {
                            s.c(s.b(context.getResources().getConfiguration()));
                        }
                        if (i10 == 0) {
                            Q(context).n();
                        } else {
                            v vVar = this.f784t0;
                            if (vVar != null) {
                                vVar.d();
                            }
                        }
                        if (i10 == 3) {
                            if (this.f785u0 == null) {
                                this.f785u0 = new v(this, context);
                            }
                            this.f785u0.n();
                        } else {
                            v vVar2 = this.f785u0;
                            if (vVar2 != null) {
                                vVar2.d();
                            }
                        }
                        return z8;
                    }
                }
                z7 = false;
                if (z7) {
                }
                z8 = z7;
                if (z8) {
                    if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0) {
                    }
                    if ((i6 & 4) != 0) {
                    }
                }
                if (b10 != null) {
                }
                if (i10 == 0) {
                }
                if (i10 == 3) {
                }
                return z8;
            }
            try {
                ActivityInfo activityInfo = packageManager.getActivityInfo(new ComponentName(context, obj3.getClass()), i11 >= 29 ? 269221888 : 786432);
                if (activityInfo != null) {
                    this.f782r0 = activityInfo.configChanges;
                }
            } catch (PackageManager.NameNotFoundException e16) {
                Log.d("AppCompatDelegate", "Exception while getting ActivityInfo", e16);
                this.f782r0 = 0;
            }
        }
        this.f783s0 = true;
        i5 = this.f782r0;
        configuration = this.f779o0;
        if (configuration == null) {
        }
        int i122 = configuration.uiMode & 48;
        int i132 = L.uiMode & 48;
        LocaleListCompat b112 = s.b(configuration);
        if (H != null) {
        }
        if (i122 == i132) {
        }
        if (b10 != null) {
            i6 |= 8196;
        }
        if (((~i5) & i6) != 0) {
            activity = (Activity) obj3;
            if (!activity.isChild()) {
            }
        }
        z7 = false;
        if (z7) {
        }
        z8 = z7;
        if (z8) {
        }
        if (b10 != null) {
        }
        if (i10 == 0) {
        }
        if (i10 == 3) {
        }
        return z8;
    }

    public final void G(Window window) {
        Drawable drawable;
        OnBackInvokedDispatcher onBackInvokedDispatcher;
        OnBackInvokedCallback onBackInvokedCallback;
        int resourceId;
        if (this.I != null) {
            throw new IllegalStateException("AppCompat has already installed itself into the Window");
        }
        Window.Callback callback = window.getCallback();
        if (callback instanceof u) {
            throw new IllegalStateException("AppCompat has already installed itself into the Window");
        }
        u uVar = new u(this, callback);
        this.J = uVar;
        window.setCallback(uVar);
        Context context = this.H;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes((AttributeSet) null, F0);
        if (!obtainStyledAttributes.hasValue(0) || (resourceId = obtainStyledAttributes.getResourceId(0, 0)) == 0) {
            drawable = null;
        } else {
            androidx.appcompat.widget.x a = androidx.appcompat.widget.x.a();
            synchronized (a) {
                drawable = a.a.d(context, resourceId, true);
            }
        }
        if (drawable != null) {
            window.setBackgroundDrawable(drawable);
        }
        obtainStyledAttributes.recycle();
        this.I = window;
        if (Build.VERSION.SDK_INT < 33 || (onBackInvokedDispatcher = this.C0) != null) {
            return;
        }
        Object obj = this.G;
        if (onBackInvokedDispatcher != null && (onBackInvokedCallback = this.D0) != null) {
            t.c(onBackInvokedDispatcher, onBackInvokedCallback);
            this.D0 = null;
        }
        if (obj instanceof Activity) {
            Activity activity = (Activity) obj;
            if (activity.getWindow() != null) {
                this.C0 = t.a(activity);
                a0();
            }
        }
        this.C0 = null;
        a0();
    }

    public final void I(int i5, x xVar, j jVar) {
        if (jVar == null) {
            if (xVar == null && i5 >= 0) {
                x[] xVarArr = this.f773i0;
                if (i5 < xVarArr.length) {
                    xVar = xVarArr[i5];
                }
            }
            if (xVar != null) {
                jVar = xVar.f10368h;
            }
        }
        if ((xVar == null || xVar.f10371m) && !this.f778n0) {
            u uVar = this.J;
            Window.Callback callback = this.I.getCallback();
            uVar.getClass();
            try {
                uVar.f10357w = true;
                callback.onPanelClosed(i5, jVar);
            } finally {
                uVar.f10357w = false;
            }
        }
    }

    public final void J(j jVar) {
        n nVar;
        if (this.h0) {
            return;
        }
        this.h0 = true;
        ActionBarOverlayLayout actionBarOverlayLayout = (ActionBarOverlayLayout) this.O;
        actionBarOverlayLayout.e();
        ActionMenuView actionMenuView = ((x3) actionBarOverlayLayout.f844w).a.f883d;
        if (actionMenuView != null && (nVar = actionMenuView.Q) != null) {
            nVar.l();
            androidx.appcompat.widget.h hVar = nVar.R;
            if (hVar != null && hVar.b()) {
                hVar.f14709i.dismiss();
            }
        }
        Window.Callback callback = this.I.getCallback();
        if (callback != null && !this.f778n0) {
            callback.onPanelClosed(108, jVar);
        }
        this.h0 = false;
    }

    public final void K(x xVar, boolean z5) {
        w wVar;
        j1 j1Var;
        if (z5 && xVar.a == 0 && (j1Var = this.O) != null) {
            ActionBarOverlayLayout actionBarOverlayLayout = (ActionBarOverlayLayout) j1Var;
            actionBarOverlayLayout.e();
            if (((x3) actionBarOverlayLayout.f844w).a.o()) {
                J(xVar.f10368h);
                return;
            }
        }
        WindowManager windowManager = (WindowManager) this.H.getSystemService("window");
        if (windowManager != null && xVar.f10371m && (wVar = xVar.f10365e) != null) {
            windowManager.removeView(wVar);
            if (z5) {
                I(xVar.a, xVar, null);
            }
        }
        xVar.k = false;
        xVar.f10370l = false;
        xVar.f10371m = false;
        xVar.f10366f = null;
        xVar.f10372n = true;
        if (this.f774j0 == xVar) {
            this.f774j0 = null;
        }
        if (xVar.a == 0) {
            a0();
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:11:0x0037, code lost:
    
        if (r4.dispatchKeyEvent(r7) != false) goto L93;
     */
    /* JADX WARN: Code restructure failed: missing block: B:68:0x00f0, code lost:
    
        if (r7.l() != false) goto L81;
     */
    /* JADX WARN: Removed duplicated region for block: B:56:0x011b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean M(KeyEvent keyEvent) {
        View decorView;
        boolean z5;
        boolean z6;
        ActionMenuView actionMenuView;
        Object obj = this.G;
        if ((!(obj instanceof androidx.core.view.j) && !(obj instanceof z)) || (decorView = this.I.getDecorView()) == null || !ta.a.s(decorView, keyEvent)) {
            if (keyEvent.getKeyCode() == 82) {
                u uVar = this.J;
                Window.Callback callback = this.I.getCallback();
                uVar.getClass();
                try {
                    uVar.f10356v = true;
                } finally {
                    uVar.f10356v = false;
                }
            }
            int keyCode = keyEvent.getKeyCode();
            if (keyEvent.getAction() == 0) {
                if (keyCode == 4) {
                    this.f775k0 = (keyEvent.getFlags() & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0;
                    return false;
                }
                if (keyCode == 82) {
                    if (keyEvent.getRepeatCount() == 0) {
                        x R = R(0);
                        if (!R.f10371m) {
                            Y(R, keyEvent);
                            return true;
                        }
                    }
                }
                return false;
            }
            if (keyCode != 4) {
                if (keyCode == 82) {
                    if (this.R == null) {
                        x R2 = R(0);
                        j1 j1Var = this.O;
                        Context context = this.H;
                        if (j1Var != null) {
                            ActionBarOverlayLayout actionBarOverlayLayout = (ActionBarOverlayLayout) j1Var;
                            actionBarOverlayLayout.e();
                            Toolbar toolbar = ((x3) actionBarOverlayLayout.f844w).a;
                            if (toolbar.getVisibility() == 0 && (actionMenuView = toolbar.f883d) != null && actionMenuView.P && !ViewConfiguration.get(context).hasPermanentMenuKey()) {
                                ActionBarOverlayLayout actionBarOverlayLayout2 = (ActionBarOverlayLayout) this.O;
                                actionBarOverlayLayout2.e();
                                if (((x3) actionBarOverlayLayout2.f844w).a.o()) {
                                    ActionBarOverlayLayout actionBarOverlayLayout3 = (ActionBarOverlayLayout) this.O;
                                    actionBarOverlayLayout3.e();
                                    ActionMenuView actionMenuView2 = ((x3) actionBarOverlayLayout3.f844w).a.f883d;
                                    if (actionMenuView2 != null) {
                                        n nVar = actionMenuView2.Q;
                                        if (nVar != null) {
                                        }
                                    }
                                } else if (!this.f778n0 && Y(R2, keyEvent)) {
                                    ActionBarOverlayLayout actionBarOverlayLayout4 = (ActionBarOverlayLayout) this.O;
                                    actionBarOverlayLayout4.e();
                                    z5 = ((x3) actionBarOverlayLayout4.f844w).a.u();
                                    if (z5) {
                                        AudioManager audioManager = (AudioManager) context.getApplicationContext().getSystemService(MediaStreamTrack.AUDIO_TRACK_KIND);
                                        if (audioManager != null) {
                                            audioManager.playSoundEffect(0);
                                            return true;
                                        }
                                        Log.w("AppCompatDelegate", "Couldn't get audio manager");
                                        return true;
                                    }
                                }
                                z5 = false;
                                if (z5) {
                                }
                            }
                        }
                        boolean z7 = R2.f10371m;
                        if (z7 || R2.f10370l) {
                            K(R2, true);
                            z5 = z7;
                            if (z5) {
                            }
                        } else {
                            if (R2.k) {
                                if (R2.f10373o) {
                                    R2.k = false;
                                    z6 = Y(R2, keyEvent);
                                } else {
                                    z6 = true;
                                }
                                if (z6) {
                                    W(R2, keyEvent);
                                    z5 = true;
                                    if (z5) {
                                    }
                                }
                            }
                            z5 = false;
                            if (z5) {
                            }
                        }
                    }
                }
                return false;
            }
            if (!V()) {
                return false;
            }
        }
        return true;
    }

    public final void N(int i5) {
        x R = R(i5);
        if (R.f10368h != null) {
            Bundle bundle = new Bundle();
            R.f10368h.t(bundle);
            if (bundle.size() > 0) {
                R.f10374p = bundle;
            }
            R.f10368h.w();
            R.f10368h.clear();
        }
        R.f10373o = true;
        R.f10372n = true;
        if ((i5 == 108 || i5 == 0) && this.O != null) {
            x R2 = R(0);
            R2.k = false;
            Y(R2, null);
        }
    }

    public final void O() {
        ViewGroup viewGroup;
        if (this.W) {
            return;
        }
        Context context = this.H;
        int[] iArr = h.a.j;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(iArr);
        if (!obtainStyledAttributes.hasValue(117)) {
            obtainStyledAttributes.recycle();
            throw new IllegalStateException("You need to use a Theme.AppCompat theme (or descendant) with this activity.");
        }
        int i5 = 0;
        if (obtainStyledAttributes.getBoolean(126, false)) {
            w(1);
        } else if (obtainStyledAttributes.getBoolean(117, false)) {
            w(108);
        }
        if (obtainStyledAttributes.getBoolean(118, false)) {
            w(109);
        }
        if (obtainStyledAttributes.getBoolean(119, false)) {
            w(10);
        }
        this.f771f0 = obtainStyledAttributes.getBoolean(0, false);
        obtainStyledAttributes.recycle();
        P();
        this.I.getDecorView();
        LayoutInflater from = LayoutInflater.from(context);
        if (this.f772g0) {
            viewGroup = this.f770e0 ? (ViewGroup) from.inflate(com.discord.R.layout.abc_screen_simple_overlay_action_mode, (ViewGroup) null) : (ViewGroup) from.inflate(com.discord.R.layout.abc_screen_simple, (ViewGroup) null);
        } else if (this.f771f0) {
            viewGroup = (ViewGroup) from.inflate(com.discord.R.layout.abc_dialog_title_material, (ViewGroup) null);
            this.f769d0 = false;
            this.f768c0 = false;
        } else if (this.f768c0) {
            TypedValue typedValue = new TypedValue();
            context.getTheme().resolveAttribute(com.discord.R.attr.actionBarTheme, typedValue, true);
            viewGroup = (ViewGroup) LayoutInflater.from(typedValue.resourceId != 0 ? new ContextThemeWrapper(context, typedValue.resourceId) : context).inflate(com.discord.R.layout.abc_screen_toolbar, (ViewGroup) null);
            j1 j1Var = (j1) viewGroup.findViewById(com.discord.R.id.decor_content_parent);
            this.O = j1Var;
            j1Var.setWindowCallback(this.I.getCallback());
            if (this.f769d0) {
                ((ActionBarOverlayLayout) this.O).d(109);
            }
            if (this.a0) {
                ((ActionBarOverlayLayout) this.O).d(2);
            }
            if (this.f767b0) {
                ((ActionBarOverlayLayout) this.O).d(5);
            }
        } else {
            viewGroup = null;
        }
        if (viewGroup == null) {
            StringBuilder sb2 = new StringBuilder("AppCompat does not support the current theme features: { windowActionBar: ");
            sb2.append(this.f768c0);
            sb2.append(", windowActionBarOverlay: ");
            sb2.append(this.f769d0);
            sb2.append(", android:windowIsFloating: ");
            sb2.append(this.f771f0);
            sb2.append(", windowActionModeOverlay: ");
            sb2.append(this.f770e0);
            sb2.append(", windowNoTitle: ");
            throw new IllegalArgumentException(com.discord.chat.bridge.botuikit.a.l(sb2, this.f772g0, " }"));
        }
        m mVar = new m(i5, this);
        WeakHashMap weakHashMap = s0.a;
        androidx.core.view.j0.m(viewGroup, mVar);
        if (this.O == null) {
            this.Y = (TextView) viewGroup.findViewById(com.discord.R.id.title);
        }
        boolean z5 = f4.a;
        try {
            Method method = viewGroup.getClass().getMethod("makeOptionalFitsSystemWindows", null);
            if (!method.isAccessible()) {
                method.setAccessible(true);
            }
            method.invoke(viewGroup, null);
        } catch (IllegalAccessException e9) {
            Log.d("ViewUtils", "Could not invoke makeOptionalFitsSystemWindows", e9);
        } catch (NoSuchMethodException unused) {
            Log.d("ViewUtils", "Could not find method makeOptionalFitsSystemWindows. Oh well...");
        } catch (InvocationTargetException e10) {
            Log.d("ViewUtils", "Could not invoke makeOptionalFitsSystemWindows", e10);
        }
        ContentFrameLayout contentFrameLayout = (ContentFrameLayout) viewGroup.findViewById(com.discord.R.id.action_bar_activity_content);
        ViewGroup viewGroup2 = (ViewGroup) this.I.findViewById(R.id.content);
        if (viewGroup2 != null) {
            while (viewGroup2.getChildCount() > 0) {
                View childAt = viewGroup2.getChildAt(0);
                viewGroup2.removeViewAt(0);
                contentFrameLayout.addView(childAt);
            }
            viewGroup2.setId(-1);
            contentFrameLayout.setId(R.id.content);
            if (viewGroup2 instanceof FrameLayout) {
                ((FrameLayout) viewGroup2).setForeground(null);
            }
        }
        this.I.setContentView(viewGroup);
        contentFrameLayout.setAttachListener(new ve.i(this));
        this.X = viewGroup;
        Object obj = this.G;
        CharSequence title = obj instanceof Activity ? ((Activity) obj).getTitle() : this.N;
        if (!TextUtils.isEmpty(title)) {
            j1 j1Var2 = this.O;
            if (j1Var2 != null) {
                j1Var2.setWindowTitle(title);
            } else {
                ActionBar actionBar = this.L;
                if (actionBar != null) {
                    actionBar.r(title);
                } else {
                    TextView textView = this.Y;
                    if (textView != null) {
                        textView.setText(title);
                    }
                }
            }
        }
        ContentFrameLayout contentFrameLayout2 = (ContentFrameLayout) this.X.findViewById(R.id.content);
        View decorView = this.I.getDecorView();
        contentFrameLayout2.f877y.set(decorView.getPaddingLeft(), decorView.getPaddingTop(), decorView.getPaddingRight(), decorView.getPaddingBottom());
        if (contentFrameLayout2.isLaidOut()) {
            contentFrameLayout2.requestLayout();
        }
        TypedArray obtainStyledAttributes2 = context.obtainStyledAttributes(iArr);
        obtainStyledAttributes2.getValue(124, contentFrameLayout2.getMinWidthMajor());
        obtainStyledAttributes2.getValue(125, contentFrameLayout2.getMinWidthMinor());
        if (obtainStyledAttributes2.hasValue(122)) {
            obtainStyledAttributes2.getValue(122, contentFrameLayout2.getFixedWidthMajor());
        }
        if (obtainStyledAttributes2.hasValue(123)) {
            obtainStyledAttributes2.getValue(123, contentFrameLayout2.getFixedWidthMinor());
        }
        if (obtainStyledAttributes2.hasValue(120)) {
            obtainStyledAttributes2.getValue(120, contentFrameLayout2.getFixedHeightMajor());
        }
        if (obtainStyledAttributes2.hasValue(121)) {
            obtainStyledAttributes2.getValue(121, contentFrameLayout2.getFixedHeightMinor());
        }
        obtainStyledAttributes2.recycle();
        contentFrameLayout2.requestLayout();
        this.W = true;
        x R = R(0);
        if (this.f778n0 || R.f10368h != null) {
            return;
        }
        T(108);
    }

    public final void P() {
        if (this.I == null) {
            Object obj = this.G;
            if (obj instanceof Activity) {
                G(((Activity) obj).getWindow());
            }
        }
        if (this.I == null) {
            throw new IllegalStateException("We have not been given a Window");
        }
    }

    public final gh.s Q(Context context) {
        if (this.f784t0 == null) {
            if (e4.m.f7961w == null) {
                Context applicationContext = context.getApplicationContext();
                e4.m.f7961w = new e4.m(applicationContext, (LocationManager) applicationContext.getSystemService("location"));
            }
            this.f784t0 = new v(this, e4.m.f7961w);
        }
        return this.f784t0;
    }

    public final x R(int i5) {
        x[] xVarArr = this.f773i0;
        if (xVarArr == null || xVarArr.length <= i5) {
            x[] xVarArr2 = new x[i5 + 1];
            if (xVarArr != null) {
                System.arraycopy(xVarArr, 0, xVarArr2, 0, xVarArr.length);
            }
            this.f773i0 = xVarArr2;
            xVarArr = xVarArr2;
        }
        x xVar = xVarArr[i5];
        if (xVar != null) {
            return xVar;
        }
        x xVar2 = new x();
        xVar2.a = i5;
        xVar2.f10372n = false;
        xVarArr[i5] = xVar2;
        return xVar2;
    }

    public final void S() {
        O();
        if (this.f768c0 && this.L == null) {
            Object obj = this.G;
            if (obj instanceof Activity) {
                this.L = new j0((Activity) obj, this.f769d0);
            } else if (obj instanceof Dialog) {
                this.L = new j0((Dialog) obj);
            }
            ActionBar actionBar = this.L;
            if (actionBar != null) {
                actionBar.l(this.f789y0);
            }
        }
    }

    public final void T(int i5) {
        this.f787w0 = (1 << i5) | this.f787w0;
        if (this.f786v0) {
            return;
        }
        View decorView = this.I.getDecorView();
        WeakHashMap weakHashMap = s0.a;
        decorView.postOnAnimation(this.f788x0);
        this.f786v0 = true;
    }

    public final int U(Context context, int i5) {
        if (i5 != -100) {
            if (i5 != -1) {
                if (i5 != 0) {
                    if (i5 != 1 && i5 != 2) {
                        if (i5 != 3) {
                            throw new IllegalStateException("Unknown value set for night mode. Please use one of the MODE_NIGHT values from AppCompatDelegate.");
                        }
                        if (this.f785u0 == null) {
                            this.f785u0 = new v(this, context);
                        }
                        return this.f785u0.f();
                    }
                } else if (((UiModeManager) context.getApplicationContext().getSystemService("uimode")).getNightMode() != 0) {
                    return Q(context).f();
                }
            }
            return i5;
        }
        return -1;
    }

    public final boolean V() {
        boolean z5 = this.f775k0;
        this.f775k0 = false;
        x R = R(0);
        if (!R.f10371m) {
            ActionMode actionMode = this.R;
            if (actionMode != null) {
                actionMode.a();
                return true;
            }
            S();
            ActionBar actionBar = this.L;
            if (actionBar == null || !actionBar.b()) {
                return false;
            }
        } else if (!z5) {
            K(R, true);
            return true;
        }
        return true;
    }

    /* JADX WARN: Code restructure failed: missing block: B:62:0x0176, code lost:
    
        if (r2.f14639x.getCount() > 0) goto L88;
     */
    /* JADX WARN: Code restructure failed: missing block: B:89:0x0156, code lost:
    
        if (r2 != null) goto L77;
     */
    /* JADX WARN: Removed duplicated region for block: B:34:0x01d3  */
    /* JADX WARN: Removed duplicated region for block: B:36:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void W(x xVar, KeyEvent keyEvent) {
        int i5;
        ViewGroup.LayoutParams layoutParams;
        boolean z5 = xVar.f10371m;
        int i6 = xVar.a;
        if (z5 || this.f778n0) {
            return;
        }
        Context context = this.H;
        if (i6 == 0 && (context.getResources().getConfiguration().screenLayout & 15) == 4) {
            return;
        }
        Window.Callback callback = this.I.getCallback();
        if (callback != null && !callback.onMenuOpened(i6, xVar.f10368h)) {
            K(xVar, true);
            return;
        }
        WindowManager windowManager = (WindowManager) context.getSystemService("window");
        if (windowManager == null || !Y(xVar, keyEvent)) {
            return;
        }
        w wVar = xVar.f10365e;
        if (wVar == null || xVar.f10372n) {
            if (wVar == null) {
                S();
                ActionBar actionBar = this.L;
                Context e9 = actionBar != null ? actionBar.e() : null;
                if (e9 != null) {
                    context = e9;
                }
                TypedValue typedValue = new TypedValue();
                Resources.Theme newTheme = context.getResources().newTheme();
                newTheme.setTo(context.getTheme());
                newTheme.resolveAttribute(com.discord.R.attr.actionBarPopupTheme, typedValue, true);
                int i10 = typedValue.resourceId;
                if (i10 != 0) {
                    newTheme.applyStyle(i10, true);
                }
                newTheme.resolveAttribute(com.discord.R.attr.panelMenuListTheme, typedValue, true);
                int i11 = typedValue.resourceId;
                if (i11 != 0) {
                    newTheme.applyStyle(i11, true);
                } else {
                    newTheme.applyStyle(com.discord.R.style.Theme_AppCompat_CompactMenu, true);
                }
                ContextThemeWrapper contextThemeWrapper = new ContextThemeWrapper(context, 0);
                contextThemeWrapper.getTheme().setTo(newTheme);
                xVar.j = contextThemeWrapper;
                TypedArray obtainStyledAttributes = contextThemeWrapper.obtainStyledAttributes(h.a.j);
                xVar.f10362b = obtainStyledAttributes.getResourceId(86, 0);
                xVar.f10364d = obtainStyledAttributes.getResourceId(1, 0);
                obtainStyledAttributes.recycle();
                xVar.f10365e = new w(this, xVar.j);
                xVar.f10363c = 81;
            } else if (xVar.f10372n && wVar.getChildCount() > 0) {
                xVar.f10365e.removeAllViews();
            }
            View view = xVar.f10367g;
            if (view == null) {
                if (xVar.f10368h != null) {
                    if (this.Q == null) {
                        this.Q = new l(this);
                    }
                    l lVar = this.Q;
                    if (xVar.f10369i == null) {
                        f fVar = new f(xVar.j);
                        xVar.f10369i = fVar;
                        fVar.f14638w = lVar;
                        j jVar = xVar.f10368h;
                        jVar.b(fVar, jVar.a);
                    }
                    f fVar2 = xVar.f10369i;
                    w wVar2 = xVar.f10365e;
                    if (fVar2.f14637v == null) {
                        fVar2.f14637v = (ExpandedMenuView) fVar2.f14635e.inflate(com.discord.R.layout.abc_expanded_menu_layout, (ViewGroup) wVar2, false);
                        if (fVar2.f14639x == null) {
                            fVar2.f14639x = new n.e(fVar2);
                        }
                        fVar2.f14637v.setAdapter((ListAdapter) fVar2.f14639x);
                        fVar2.f14637v.setOnItemClickListener(fVar2);
                    }
                    ExpandedMenuView expandedMenuView = fVar2.f14637v;
                    xVar.f10366f = expandedMenuView;
                }
                xVar.f10372n = true;
                return;
            }
            xVar.f10366f = view;
            if (xVar.f10366f != null) {
                if (xVar.f10367g == null) {
                    f fVar3 = xVar.f10369i;
                    if (fVar3.f14639x == null) {
                        fVar3.f14639x = new n.e(fVar3);
                    }
                }
                ViewGroup.LayoutParams layoutParams2 = xVar.f10366f.getLayoutParams();
                if (layoutParams2 == null) {
                    layoutParams2 = new ViewGroup.LayoutParams(-2, -2);
                }
                xVar.f10365e.setBackgroundResource(xVar.f10362b);
                ViewParent parent = xVar.f10366f.getParent();
                if (parent instanceof ViewGroup) {
                    ((ViewGroup) parent).removeView(xVar.f10366f);
                }
                xVar.f10365e.addView(xVar.f10366f, layoutParams2);
                if (!xVar.f10366f.hasFocus()) {
                    xVar.f10366f.requestFocus();
                }
            }
            xVar.f10372n = true;
            return;
        }
        View view2 = xVar.f10367g;
        if (view2 != null && (layoutParams = view2.getLayoutParams()) != null && layoutParams.width == -1) {
            i5 = -1;
            xVar.f10370l = false;
            WindowManager.LayoutParams layoutParams3 = new WindowManager.LayoutParams(i5, -2, 0, 0, RNCWebViewManager.COMMAND_CLEAR_HISTORY, 8519680, -3);
            layoutParams3.gravity = xVar.f10363c;
            layoutParams3.windowAnimations = xVar.f10364d;
            windowManager.addView(xVar.f10365e, layoutParams3);
            xVar.f10371m = true;
            if (i6 != 0) {
                a0();
                return;
            }
            return;
        }
        i5 = -2;
        xVar.f10370l = false;
        WindowManager.LayoutParams layoutParams32 = new WindowManager.LayoutParams(i5, -2, 0, 0, RNCWebViewManager.COMMAND_CLEAR_HISTORY, 8519680, -3);
        layoutParams32.gravity = xVar.f10363c;
        layoutParams32.windowAnimations = xVar.f10364d;
        windowManager.addView(xVar.f10365e, layoutParams32);
        xVar.f10371m = true;
        if (i6 != 0) {
        }
    }

    public final boolean X(x xVar, int i5, KeyEvent keyEvent) {
        j jVar;
        if (keyEvent.isSystem()) {
            return false;
        }
        if ((xVar.k || Y(xVar, keyEvent)) && (jVar = xVar.f10368h) != null) {
            return jVar.performShortcut(i5, keyEvent, 1);
        }
        return false;
    }

    /* JADX WARN: Code restructure failed: missing block: B:62:0x00d5, code lost:
    
        if (r13.f10368h == null) goto L81;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean Y(x xVar, KeyEvent keyEvent) {
        j1 j1Var;
        j1 j1Var2;
        Resources.Theme theme;
        j1 j1Var3;
        j1 j1Var4;
        if (!this.f778n0) {
            boolean z5 = xVar.k;
            int i5 = xVar.a;
            if (z5) {
                return true;
            }
            x xVar2 = this.f774j0;
            if (xVar2 != null && xVar2 != xVar) {
                K(xVar2, false);
            }
            Window.Callback callback = this.I.getCallback();
            if (callback != null) {
                xVar.f10367g = callback.onCreatePanelView(i5);
            }
            boolean z6 = i5 == 0 || i5 == 108;
            if (z6 && (j1Var4 = this.O) != null) {
                ActionBarOverlayLayout actionBarOverlayLayout = (ActionBarOverlayLayout) j1Var4;
                actionBarOverlayLayout.e();
                ((x3) actionBarOverlayLayout.f844w).f1168l = true;
            }
            if (xVar.f10367g == null && (!z6 || !(this.L instanceof e0))) {
                j jVar = xVar.f10368h;
                if (jVar == null || xVar.f10373o) {
                    if (jVar == null) {
                        Context context = this.H;
                        if ((i5 == 0 || i5 == 108) && this.O != null) {
                            TypedValue typedValue = new TypedValue();
                            Resources.Theme theme2 = context.getTheme();
                            theme2.resolveAttribute(com.discord.R.attr.actionBarTheme, typedValue, true);
                            if (typedValue.resourceId != 0) {
                                theme = context.getResources().newTheme();
                                theme.setTo(theme2);
                                theme.applyStyle(typedValue.resourceId, true);
                                theme.resolveAttribute(com.discord.R.attr.actionBarWidgetTheme, typedValue, true);
                            } else {
                                theme2.resolveAttribute(com.discord.R.attr.actionBarWidgetTheme, typedValue, true);
                                theme = null;
                            }
                            if (typedValue.resourceId != 0) {
                                if (theme == null) {
                                    theme = context.getResources().newTheme();
                                    theme.setTo(theme2);
                                }
                                theme.applyStyle(typedValue.resourceId, true);
                            }
                            if (theme != null) {
                                ContextThemeWrapper contextThemeWrapper = new ContextThemeWrapper(context, 0);
                                contextThemeWrapper.getTheme().setTo(theme);
                                context = contextThemeWrapper;
                            }
                        }
                        j jVar2 = new j(context);
                        jVar2.f14650e = this;
                        j jVar3 = xVar.f10368h;
                        if (jVar2 != jVar3) {
                            if (jVar3 != null) {
                                jVar3.r(xVar.f10369i);
                            }
                            xVar.f10368h = jVar2;
                            f fVar = xVar.f10369i;
                            if (fVar != null) {
                                jVar2.b(fVar, jVar2.a);
                            }
                        }
                    }
                    if (z6 && (j1Var2 = this.O) != null) {
                        if (this.P == null) {
                            this.P = new c(15, this);
                        }
                        ((ActionBarOverlayLayout) j1Var2).f(xVar.f10368h, this.P);
                    }
                    xVar.f10368h.w();
                    if (callback.onCreatePanelMenu(i5, xVar.f10368h)) {
                        xVar.f10373o = false;
                    } else {
                        j jVar4 = xVar.f10368h;
                        if (jVar4 != null) {
                            if (jVar4 != null) {
                                jVar4.r(xVar.f10369i);
                            }
                            xVar.f10368h = null;
                        }
                        if (z6 && (j1Var = this.O) != null) {
                            ((ActionBarOverlayLayout) j1Var).f(null, this.P);
                        }
                    }
                }
                xVar.f10368h.w();
                Bundle bundle = xVar.f10374p;
                if (bundle != null) {
                    xVar.f10368h.s(bundle);
                    xVar.f10374p = null;
                }
                if (!callback.onPreparePanel(0, xVar.f10367g, xVar.f10368h)) {
                    if (z6 && (j1Var3 = this.O) != null) {
                        ((ActionBarOverlayLayout) j1Var3).f(null, this.P);
                    }
                    xVar.f10368h.v();
                    return false;
                }
                xVar.f10368h.setQwertyMode(KeyCharacterMap.load(keyEvent != null ? keyEvent.getDeviceId() : -1).getKeyboardType() != 1);
                xVar.f10368h.v();
            }
            xVar.k = true;
            xVar.f10370l = false;
            this.f774j0 = xVar;
            return true;
        }
        return false;
    }

    public final void Z() {
        if (this.W) {
            throw new AndroidRuntimeException("Window feature must be requested before adding content");
        }
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final void a(View view, ViewGroup.LayoutParams layoutParams) {
        O();
        ((ViewGroup) this.X.findViewById(R.id.content)).addView(view, layoutParams);
        this.J.a(this.I.getCallback());
    }

    public final void a0() {
        OnBackInvokedCallback onBackInvokedCallback;
        if (Build.VERSION.SDK_INT >= 33) {
            boolean z5 = false;
            if (this.C0 != null && (R(0).f10371m || this.R != null)) {
                z5 = true;
            }
            if (z5 && this.D0 == null) {
                this.D0 = t.b(this.C0, this);
            } else {
                if (z5 || (onBackInvokedCallback = this.D0) == null) {
                    return;
                }
                t.c(this.C0, onBackInvokedCallback);
                this.D0 = null;
            }
        }
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final boolean b() {
        return F(true, true);
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final Context c(Context context) {
        Configuration configuration;
        this.f776l0 = true;
        int i5 = this.f780p0;
        if (i5 == -100) {
            i5 = AppCompatDelegate.f761e;
        }
        int U = U(context, i5);
        int i6 = 0;
        if (AppCompatDelegate.m(context) && AppCompatDelegate.m(context)) {
            if (Build.VERSION.SDK_INT < 33) {
                synchronized (AppCompatDelegate.F) {
                    try {
                        LocaleListCompat localeListCompat = AppCompatDelegate.f762i;
                        if (localeListCompat == null) {
                            if (AppCompatDelegate.f763v == null) {
                                AppCompatDelegate.f763v = LocaleListCompat.a(x0.f.f(context));
                            }
                            if (!AppCompatDelegate.f763v.a.a.isEmpty()) {
                                AppCompatDelegate.f762i = AppCompatDelegate.f763v;
                            }
                        } else if (!localeListCompat.equals(AppCompatDelegate.f763v)) {
                            LocaleListCompat localeListCompat2 = AppCompatDelegate.f762i;
                            AppCompatDelegate.f763v = localeListCompat2;
                            x0.f.e(context, localeListCompat2.a.a.toLanguageTags());
                        }
                    } finally {
                    }
                }
            } else if (!AppCompatDelegate.f765x) {
                AppCompatDelegate.f760d.execute(new i.j(context, i6));
            }
        }
        LocaleListCompat H = H(context);
        if (context instanceof android.view.ContextThemeWrapper) {
            try {
                ((android.view.ContextThemeWrapper) context).applyOverrideConfiguration(L(context, U, H, null, false));
                return context;
            } catch (IllegalStateException unused) {
            }
        }
        if (context instanceof ContextThemeWrapper) {
            try {
                ((ContextThemeWrapper) context).a(L(context, U, H, null, false));
                return context;
            } catch (IllegalStateException unused2) {
            }
        }
        if (!G0) {
            return context;
        }
        Configuration configuration2 = new Configuration();
        configuration2.uiMode = -1;
        configuration2.fontScale = 0.0f;
        Configuration configuration3 = context.createConfigurationContext(configuration2).getResources().getConfiguration();
        Configuration configuration4 = context.getResources().getConfiguration();
        configuration3.uiMode = configuration4.uiMode;
        if (configuration3.equals(configuration4)) {
            configuration = null;
        } else {
            configuration = new Configuration();
            configuration.fontScale = 0.0f;
            if (configuration3.diff(configuration4) != 0) {
                float f2 = configuration3.fontScale;
                float f10 = configuration4.fontScale;
                if (f2 != f10) {
                    configuration.fontScale = f10;
                }
                int i10 = configuration3.mcc;
                int i11 = configuration4.mcc;
                if (i10 != i11) {
                    configuration.mcc = i11;
                }
                int i12 = configuration3.mnc;
                int i13 = configuration4.mnc;
                if (i12 != i13) {
                    configuration.mnc = i13;
                }
                int i14 = Build.VERSION.SDK_INT;
                s.a(configuration3, configuration4, configuration);
                int i15 = configuration3.touchscreen;
                int i16 = configuration4.touchscreen;
                if (i15 != i16) {
                    configuration.touchscreen = i16;
                }
                int i17 = configuration3.keyboard;
                int i18 = configuration4.keyboard;
                if (i17 != i18) {
                    configuration.keyboard = i18;
                }
                int i19 = configuration3.keyboardHidden;
                int i20 = configuration4.keyboardHidden;
                if (i19 != i20) {
                    configuration.keyboardHidden = i20;
                }
                int i21 = configuration3.navigation;
                int i22 = configuration4.navigation;
                if (i21 != i22) {
                    configuration.navigation = i22;
                }
                int i23 = configuration3.navigationHidden;
                int i24 = configuration4.navigationHidden;
                if (i23 != i24) {
                    configuration.navigationHidden = i24;
                }
                int i25 = configuration3.orientation;
                int i26 = configuration4.orientation;
                if (i25 != i26) {
                    configuration.orientation = i26;
                }
                int i27 = configuration3.screenLayout & 15;
                int i28 = configuration4.screenLayout & 15;
                if (i27 != i28) {
                    configuration.screenLayout |= i28;
                }
                int i29 = configuration3.screenLayout & JfifUtil.MARKER_SOFn;
                int i30 = configuration4.screenLayout & JfifUtil.MARKER_SOFn;
                if (i29 != i30) {
                    configuration.screenLayout |= i30;
                }
                int i31 = configuration3.screenLayout & 48;
                int i32 = configuration4.screenLayout & 48;
                if (i31 != i32) {
                    configuration.screenLayout |= i32;
                }
                int i33 = configuration3.screenLayout & 768;
                int i34 = configuration4.screenLayout & 768;
                if (i33 != i34) {
                    configuration.screenLayout |= i34;
                }
                if (i14 >= 26) {
                    jf.a.e(configuration3, configuration4, configuration);
                }
                int i35 = configuration3.uiMode & 15;
                int i36 = configuration4.uiMode & 15;
                if (i35 != i36) {
                    configuration.uiMode |= i36;
                }
                int i37 = configuration3.uiMode & 48;
                int i38 = configuration4.uiMode & 48;
                if (i37 != i38) {
                    configuration.uiMode |= i38;
                }
                int i39 = configuration3.screenWidthDp;
                int i40 = configuration4.screenWidthDp;
                if (i39 != i40) {
                    configuration.screenWidthDp = i40;
                }
                int i41 = configuration3.screenHeightDp;
                int i42 = configuration4.screenHeightDp;
                if (i41 != i42) {
                    configuration.screenHeightDp = i42;
                }
                int i43 = configuration3.smallestScreenWidthDp;
                int i44 = configuration4.smallestScreenWidthDp;
                if (i43 != i44) {
                    configuration.smallestScreenWidthDp = i44;
                }
                int i45 = configuration3.densityDpi;
                int i46 = configuration4.densityDpi;
                if (i45 != i46) {
                    configuration.densityDpi = i46;
                }
            }
        }
        Configuration L = L(context, U, H, configuration, true);
        ContextThemeWrapper contextThemeWrapper = new ContextThemeWrapper(context, com.discord.R.style.Theme_AppCompat_Empty);
        contextThemeWrapper.a(L);
        try {
            if (context.getTheme() != null) {
                Resources.Theme theme = contextThemeWrapper.getTheme();
                if (Build.VERSION.SDK_INT >= 29) {
                    a1.m.a(theme);
                } else {
                    synchronized (b.f10e) {
                        if (!b.f12g) {
                            try {
                                Method declaredMethod = Resources.Theme.class.getDeclaredMethod("rebase", null);
                                b.f11f = declaredMethod;
                                declaredMethod.setAccessible(true);
                            } catch (NoSuchMethodException e9) {
                                Log.i("ResourcesCompat", "Failed to retrieve rebase() method", e9);
                            }
                            b.f12g = true;
                        }
                        Method method = b.f11f;
                        if (method != null) {
                            try {
                                method.invoke(theme, null);
                            } catch (IllegalAccessException | InvocationTargetException e10) {
                                Log.i("ResourcesCompat", "Failed to invoke rebase() method via reflection", e10);
                                b.f11f = null;
                            }
                        }
                    }
                }
            }
        } catch (NullPointerException unused3) {
        }
        return contextThemeWrapper;
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final View d(int i5) {
        O();
        return this.I.findViewById(i5);
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final Context e() {
        return this.H;
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final io.sentry.hints.j f() {
        return new io.sentry.hints.j(9);
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final int g() {
        return this.f780p0;
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final MenuInflater h() {
        if (this.M == null) {
            S();
            ActionBar actionBar = this.L;
            this.M = new e(actionBar != null ? actionBar.e() : this.H);
        }
        return this.M;
    }

    @Override // n.h
    public final boolean i(j jVar, MenuItem menuItem) {
        x xVar;
        Window.Callback callback = this.I.getCallback();
        if (callback != null && !this.f778n0) {
            j k = jVar.k();
            x[] xVarArr = this.f773i0;
            int length = xVarArr != null ? xVarArr.length : 0;
            int i5 = 0;
            while (true) {
                if (i5 < length) {
                    xVar = xVarArr[i5];
                    if (xVar != null && xVar.f10368h == k) {
                        break;
                    }
                    i5++;
                } else {
                    xVar = null;
                    break;
                }
            }
            if (xVar != null) {
                return callback.onMenuItemSelected(xVar.a, menuItem);
            }
        }
        return false;
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final ActionBar j() {
        S();
        return this.L;
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final void k() {
        LayoutInflater from = LayoutInflater.from(this.H);
        if (from.getFactory() == null) {
            from.setFactory2(this);
        } else {
            if (from.getFactory2() instanceof a) {
                return;
            }
            Log.i("AppCompatDelegate", "The Activity's LayoutInflater already has a Factory installed so we can not install AppCompat's");
        }
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final void l() {
        if (this.L != null) {
            S();
            if (this.L.f()) {
                return;
            }
            T(0);
        }
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final void n(Configuration configuration) {
        if (this.f768c0 && this.W) {
            S();
            ActionBar actionBar = this.L;
            if (actionBar != null) {
                actionBar.g();
            }
        }
        androidx.appcompat.widget.x a = androidx.appcompat.widget.x.a();
        Context context = this.H;
        synchronized (a) {
            n2 n2Var = a.a;
            synchronized (n2Var) {
                k kVar = (k) n2Var.f1053b.get(context);
                if (kVar != null) {
                    kVar.a();
                }
            }
        }
        this.f779o0 = new Configuration(this.H.getResources().getConfiguration());
        F(false, false);
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final void o() {
        String str;
        this.f776l0 = true;
        F(false, true);
        P();
        Object obj = this.G;
        if (obj instanceof Activity) {
            try {
                Activity activity = (Activity) obj;
                try {
                    str = x0.f.d(activity, activity.getComponentName());
                } catch (PackageManager.NameNotFoundException e9) {
                    throw new IllegalArgumentException(e9);
                }
            } catch (IllegalArgumentException unused) {
                str = null;
            }
            if (str != null) {
                ActionBar actionBar = this.L;
                if (actionBar == null) {
                    this.f789y0 = true;
                } else {
                    actionBar.l(true);
                }
            }
            synchronized (AppCompatDelegate.E) {
                AppCompatDelegate.u(this);
                AppCompatDelegate.f766y.add(new WeakReference(this));
            }
        }
        this.f779o0 = new Configuration(this.H.getResources().getConfiguration());
        this.f777m0 = true;
    }

    /*  JADX ERROR: JadxRuntimeException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxRuntimeException: Can't find top splitter block for handler:B:68:0x01e4
        	at jadx.core.utils.BlockUtils.getTopSplitterForHandler(BlockUtils.java:1179)
        	at jadx.core.dex.visitors.regions.maker.ExcHandlersRegionMaker.collectHandlerRegions(ExcHandlersRegionMaker.java:53)
        	at jadx.core.dex.visitors.regions.maker.ExcHandlersRegionMaker.process(ExcHandlersRegionMaker.java:38)
        	at jadx.core.dex.visitors.regions.RegionMakerVisitor.visit(RegionMakerVisitor.java:27)
        */
    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @Override // android.view.LayoutInflater.Factory2
    public final android.view.View onCreateView(android.view.View r9, java.lang.String r10, android.content.Context r11, android.util.AttributeSet r12) {
        /*
            Method dump skipped, instructions count: 726
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: androidx.appcompat.app.a.onCreateView(android.view.View, java.lang.String, android.content.Context, android.util.AttributeSet):android.view.View");
    }

    /* JADX WARN: Removed duplicated region for block: B:26:0x0060  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x0067  */
    /* JADX WARN: Removed duplicated region for block: B:32:0x006e  */
    /* JADX WARN: Removed duplicated region for block: B:34:? A[RETURN, SYNTHETIC] */
    @Override // androidx.appcompat.app.AppCompatDelegate
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void p() {
        ActionBar actionBar;
        v vVar;
        v vVar2;
        if (this.G instanceof Activity) {
            synchronized (AppCompatDelegate.E) {
                AppCompatDelegate.u(this);
            }
        }
        if (this.f786v0) {
            this.I.getDecorView().removeCallbacks(this.f788x0);
        }
        this.f778n0 = true;
        if (this.f780p0 != -100) {
            Object obj = this.G;
            if ((obj instanceof Activity) && ((Activity) obj).isChangingConfigurations()) {
                E0.put(this.G.getClass().getName(), Integer.valueOf(this.f780p0));
                actionBar = this.L;
                if (actionBar != null) {
                    actionBar.h();
                }
                vVar = this.f784t0;
                if (vVar != null) {
                    vVar.d();
                }
                vVar2 = this.f785u0;
                if (vVar2 == null) {
                    vVar2.d();
                    return;
                }
                return;
            }
        }
        E0.remove(this.G.getClass().getName());
        actionBar = this.L;
        if (actionBar != null) {
        }
        vVar = this.f784t0;
        if (vVar != null) {
        }
        vVar2 = this.f785u0;
        if (vVar2 == null) {
        }
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final void q() {
        O();
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final void r() {
        S();
        ActionBar actionBar = this.L;
        if (actionBar != null) {
            actionBar.p(true);
        }
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final void s() {
        F(true, false);
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final void t() {
        S();
        ActionBar actionBar = this.L;
        if (actionBar != null) {
            actionBar.p(false);
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:18:0x0048, code lost:
    
        if (r6.m() != false) goto L20;
     */
    @Override // n.h
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void v(j jVar) {
        ActionMenuView actionMenuView;
        n nVar;
        j1 j1Var = this.O;
        if (j1Var != null) {
            ActionBarOverlayLayout actionBarOverlayLayout = (ActionBarOverlayLayout) j1Var;
            actionBarOverlayLayout.e();
            Toolbar toolbar = ((x3) actionBarOverlayLayout.f844w).a;
            if (toolbar.getVisibility() == 0 && (actionMenuView = toolbar.f883d) != null && actionMenuView.P) {
                if (ViewConfiguration.get(this.H).hasPermanentMenuKey()) {
                    ActionBarOverlayLayout actionBarOverlayLayout2 = (ActionBarOverlayLayout) this.O;
                    actionBarOverlayLayout2.e();
                    ActionMenuView actionMenuView2 = ((x3) actionBarOverlayLayout2.f844w).a.f883d;
                    if (actionMenuView2 != null) {
                        n nVar2 = actionMenuView2.Q;
                        if (nVar2 != null) {
                            if (nVar2.S == null) {
                            }
                        }
                    }
                }
                Window.Callback callback = this.I.getCallback();
                ActionBarOverlayLayout actionBarOverlayLayout3 = (ActionBarOverlayLayout) this.O;
                actionBarOverlayLayout3.e();
                if (((x3) actionBarOverlayLayout3.f844w).a.o()) {
                    ActionBarOverlayLayout actionBarOverlayLayout4 = (ActionBarOverlayLayout) this.O;
                    actionBarOverlayLayout4.e();
                    ActionMenuView actionMenuView3 = ((x3) actionBarOverlayLayout4.f844w).a.f883d;
                    if (actionMenuView3 != null && (nVar = actionMenuView3.Q) != null) {
                        nVar.l();
                    }
                    if (this.f778n0) {
                        return;
                    }
                    callback.onPanelClosed(108, R(0).f10368h);
                    return;
                }
                if (callback == null || this.f778n0) {
                    return;
                }
                if (this.f786v0 && (1 & this.f787w0) != 0) {
                    View decorView = this.I.getDecorView();
                    a3.h hVar = this.f788x0;
                    decorView.removeCallbacks(hVar);
                    hVar.run();
                }
                x R = R(0);
                j jVar2 = R.f10368h;
                if (jVar2 == null || R.f10373o || !callback.onPreparePanel(0, R.f10367g, jVar2)) {
                    return;
                }
                callback.onMenuOpened(108, R.f10368h);
                ActionBarOverlayLayout actionBarOverlayLayout5 = (ActionBarOverlayLayout) this.O;
                actionBarOverlayLayout5.e();
                ((x3) actionBarOverlayLayout5.f844w).a.u();
                return;
            }
        }
        x R2 = R(0);
        R2.f10372n = true;
        K(R2, false);
        W(R2, null);
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final boolean w(int i5) {
        if (i5 == 8) {
            Log.i("AppCompatDelegate", "You should now use the AppCompatDelegate.FEATURE_SUPPORT_ACTION_BAR id when requesting this feature.");
            i5 = 108;
        } else if (i5 == 9) {
            Log.i("AppCompatDelegate", "You should now use the AppCompatDelegate.FEATURE_SUPPORT_ACTION_BAR_OVERLAY id when requesting this feature.");
            i5 = 109;
        }
        if (this.f772g0 && i5 == 108) {
            return false;
        }
        if (this.f768c0 && i5 == 1) {
            this.f768c0 = false;
        }
        if (i5 == 1) {
            Z();
            this.f772g0 = true;
            return true;
        }
        if (i5 == 2) {
            Z();
            this.a0 = true;
            return true;
        }
        if (i5 == 5) {
            Z();
            this.f767b0 = true;
            return true;
        }
        if (i5 == 10) {
            Z();
            this.f770e0 = true;
            return true;
        }
        if (i5 == 108) {
            Z();
            this.f768c0 = true;
            return true;
        }
        if (i5 != 109) {
            return this.I.requestFeature(i5);
        }
        Z();
        this.f769d0 = true;
        return true;
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final void x(int i5) {
        O();
        ViewGroup viewGroup = (ViewGroup) this.X.findViewById(R.id.content);
        viewGroup.removeAllViews();
        LayoutInflater.from(this.H).inflate(i5, viewGroup);
        this.J.a(this.I.getCallback());
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final void y(View view) {
        O();
        ViewGroup viewGroup = (ViewGroup) this.X.findViewById(R.id.content);
        viewGroup.removeAllViews();
        viewGroup.addView(view);
        this.J.a(this.I.getCallback());
    }

    @Override // androidx.appcompat.app.AppCompatDelegate
    public final void z(View view, ViewGroup.LayoutParams layoutParams) {
        O();
        ViewGroup viewGroup = (ViewGroup) this.X.findViewById(R.id.content);
        viewGroup.removeAllViews();
        viewGroup.addView(view, layoutParams);
        this.J.a(this.I.getCallback());
    }

    @Override // android.view.LayoutInflater.Factory
    public final View onCreateView(String str, Context context, AttributeSet attributeSet) {
        return onCreateView(null, str, context, attributeSet);
    }
}
