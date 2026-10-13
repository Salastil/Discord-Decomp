package com.swmansion.rnscreens.utils;

import android.app.Activity;
import android.util.Log;
import android.view.View;
import android.widget.TextView;
import androidx.appcompat.widget.Toolbar;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.k0;
import androidx.core.view.s0;
import com.facebook.jni.annotations.DoNotStrip;
import com.facebook.react.bridge.LifecycleEventListener;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.ViewProps;
import com.swmansion.rnscreens.ScreenStackHeaderConfig;
import ha.k;
import java.lang.ref.WeakReference;
import java.util.WeakHashMap;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import ng.e;
import ng.g;
import qn.a;
import qn.b;
import qn.c;
import qn.d;

@DoNotStrip
@Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\u0007\n\u0002\b\u0004\b\u0001\u0018\u00002\u00020\u0001:\u0001\nJ'\u0010\b\u001a\u00020\u00072\u0006\u0010\u0003\u001a\u00020\u00022\u0006\u0010\u0005\u001a\u00020\u00042\u0006\u0010\u0006\u001a\u00020\u0004H\u0003¢\u0006\u0004\b\b\u0010\t¨\u0006\u000b"}, d2 = {"Lcom/swmansion/rnscreens/utils/ScreenDummyLayoutHelper;", "Lcom/facebook/react/bridge/LifecycleEventListener;", "", ViewProps.FONT_SIZE, "", "isTitleEmpty", "applyTopInset", "", "computeDummyLayout", "(IZZ)F", "qn/c", "react-native-screens_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nScreenDummyLayoutHelper.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ScreenDummyLayoutHelper.kt\ncom/swmansion/rnscreens/utils/ScreenDummyLayoutHelper\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,383:1\n1#2:384\n*E\n"})
/* loaded from: classes3.dex */
public final class ScreenDummyLayoutHelper implements LifecycleEventListener {
    public static final c G = new c();
    public static WeakReference H = new WeakReference(null);
    public d E;
    public volatile boolean F;

    /* renamed from: d, reason: collision with root package name */
    public CoordinatorLayout f6795d;

    /* renamed from: e, reason: collision with root package name */
    public g f6796e;

    /* renamed from: i, reason: collision with root package name */
    public Toolbar f6797i;

    /* renamed from: v, reason: collision with root package name */
    public float f6798v;

    /* renamed from: w, reason: collision with root package name */
    public int f6799w;

    /* renamed from: x, reason: collision with root package name */
    public a f6800x;

    /* renamed from: y, reason: collision with root package name */
    public WeakReference f6801y;

    /* JADX WARN: Removed duplicated region for block: B:38:0x00ab A[Catch: all -> 0x001f, TryCatch #0 {, blocks: (B:3:0x0001, B:5:0x0006, B:7:0x000e, B:9:0x0016, B:13:0x0022, B:14:0x0029, B:15:0x002a, B:17:0x0041, B:19:0x0047, B:22:0x004d, B:24:0x005d, B:30:0x006d, B:32:0x007d, B:35:0x008b, B:36:0x0097, B:38:0x00ab, B:39:0x00be, B:43:0x00cc, B:44:0x00d0, B:45:0x00ce, B:46:0x00d3, B:49:0x00b4), top: B:2:0x0001 }] */
    /* JADX WARN: Removed duplicated region for block: B:41:0x00c9  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x00b4 A[Catch: all -> 0x001f, TryCatch #0 {, blocks: (B:3:0x0001, B:5:0x0006, B:7:0x000e, B:9:0x0016, B:13:0x0022, B:14:0x0029, B:15:0x002a, B:17:0x0041, B:19:0x0047, B:22:0x004d, B:24:0x005d, B:30:0x006d, B:32:0x007d, B:35:0x008b, B:36:0x0097, B:38:0x00ab, B:39:0x00be, B:43:0x00cc, B:44:0x00d0, B:45:0x00ce, B:46:0x00d3, B:49:0x00b4), top: B:2:0x0001 }] */
    @DoNotStrip
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private final synchronized float computeDummyLayout(int fontSize, boolean isTitleEmpty, boolean applyTopInset) {
        int i5;
        TextView l6;
        if (!this.F) {
            Object obj = this.f6801y.get();
            if (obj == null) {
                throw new IllegalArgumentException("[RNScreens] Context was null-ed before dummy layout was initialized");
            }
            if (!b((ReactApplicationContext) obj)) {
                Log.e("ScreenDummyLayoutHelper", "[RNScreens] Failed to late-init layout while computing header height. This is most likely a race-condition-bug in react-native-screens, please file an issue at https://github.com/software-mansion/react-native-screens/issues");
                return 0.0f;
            }
        }
        a aVar = this.f6800x;
        b key = new b(fontSize, isTitleEmpty, applyTopInset);
        aVar.getClass();
        Intrinsics.checkNotNullParameter(key, "key");
        b bVar = aVar.a;
        if (bVar.a != Integer.MIN_VALUE && Intrinsics.areEqual(bVar, key)) {
            return this.f6800x.f16911b;
        }
        CoordinatorLayout coordinatorLayout = this.f6795d;
        g gVar = this.f6796e;
        Toolbar toolbar = this.f6797i;
        ReactApplicationContext reactApplicationContext = (ReactApplicationContext) this.f6801y.get();
        Activity currentActivity = reactApplicationContext != null ? reactApplicationContext.getCurrentActivity() : null;
        if (coordinatorLayout != null && gVar != null && toolbar != null && currentActivity != null) {
            View decorView = currentActivity.getWindow().getDecorView();
            Intrinsics.checkNotNullExpressionValue(decorView, "getDecorView(...)");
            if (applyTopInset) {
                Intrinsics.checkNotNullParameter(decorView, "decorView");
                WeakHashMap weakHashMap = s0.a;
                WindowInsetsCompat a = k0.a(decorView);
                if (a != null) {
                    i5 = a.a.f(647).f1512b;
                    int width = decorView.getWidth();
                    int height = decorView.getHeight();
                    int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(width, 1073741824);
                    int makeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(height, 1073741824);
                    if (isTitleEmpty) {
                        toolbar.setTitle("FontSize123!#$");
                        toolbar.setContentInsetStartWithNavigation(this.f6799w);
                    } else {
                        toolbar.setTitle("");
                        toolbar.setContentInsetStartWithNavigation(0);
                    }
                    ScreenStackHeaderConfig.f6709i0.getClass();
                    l6 = k.l(toolbar);
                    if (l6 != null) {
                        l6.setTextSize(fontSize != -1 ? fontSize : this.f6798v);
                    }
                    coordinatorLayout.measure(makeMeasureSpec, makeMeasureSpec2);
                    coordinatorLayout.layout(0, 0, width, height);
                    float dIPFromPixel = PixelUtil.toDIPFromPixel(gVar.getHeight() + i5);
                    this.f6800x = new a(new b(fontSize, isTitleEmpty, applyTopInset), dIPFromPixel);
                    return dIPFromPixel;
                }
            }
            i5 = 0;
            int width2 = decorView.getWidth();
            int height2 = decorView.getHeight();
            int makeMeasureSpec3 = View.MeasureSpec.makeMeasureSpec(width2, 1073741824);
            int makeMeasureSpec22 = View.MeasureSpec.makeMeasureSpec(height2, 1073741824);
            if (isTitleEmpty) {
            }
            ScreenStackHeaderConfig.f6709i0.getClass();
            l6 = k.l(toolbar);
            if (l6 != null) {
            }
            coordinatorLayout.measure(makeMeasureSpec3, makeMeasureSpec22);
            coordinatorLayout.layout(0, 0, width2, height2);
            float dIPFromPixel2 = PixelUtil.toDIPFromPixel(gVar.getHeight() + i5);
            this.f6800x = new a(new b(fontSize, isTitleEmpty, applyTopInset), dIPFromPixel2);
            return dIPFromPixel2;
        }
        return 0.0f;
    }

    @DoNotStrip
    public static final ScreenDummyLayoutHelper getInstance() {
        return G.getInstance();
    }

    public final void a(Activity activity) {
        CoordinatorLayout coordinatorLayout = new CoordinatorLayout(activity, null);
        g gVar = new g(activity);
        gVar.setLayoutParams(new v0.d(-1, -2));
        Toolbar toolbar = new Toolbar(activity, null);
        toolbar.setTitle("FontSize123!#$");
        e eVar = new e(-2);
        eVar.a = 0;
        toolbar.setLayoutParams(eVar);
        ScreenStackHeaderConfig.f6709i0.getClass();
        TextView l6 = k.l(toolbar);
        if (l6 == null) {
            throw new IllegalStateException("[RNScreens] Failed to find TextView in children of Toolbar");
        }
        this.f6798v = l6.getTextSize();
        this.f6799w = toolbar.getContentInsetStartWithNavigation();
        gVar.addView(toolbar);
        View view = new View(activity);
        view.setLayoutParams(new v0.d(-1, -1));
        coordinatorLayout.addView(gVar);
        coordinatorLayout.addView(view);
        this.f6795d = coordinatorLayout;
        this.f6796e = gVar;
        this.f6797i = toolbar;
        this.F = true;
    }

    public final boolean b(ReactApplicationContext reactApplicationContext) {
        if (this.F) {
            return true;
        }
        if (!reactApplicationContext.hasCurrentActivity()) {
            return false;
        }
        Activity currentActivity = reactApplicationContext.getCurrentActivity();
        if (currentActivity == null) {
            throw new IllegalArgumentException("[RNScreens] Attempt to use context detached from activity. This could happen only due to race-condition.");
        }
        synchronized (this) {
            if (this.F) {
                return true;
            }
            a(currentActivity);
            if (this.E == null) {
                this.E = new d(currentActivity, this);
                currentActivity.getApplication().registerActivityLifecycleCallbacks(this.E);
            }
            Unit unit = Unit.a;
            return true;
        }
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostDestroy() {
        ReactApplicationContext reactApplicationContext = (ReactApplicationContext) this.f6801y.get();
        if (reactApplicationContext != null) {
            reactApplicationContext.removeLifecycleEventListener(this);
        }
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostPause() {
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostResume() {
        o5.a aVar = new o5.a(14);
        Object obj = this.f6801y.get();
        if (obj == null) {
            throw new IllegalArgumentException(aVar.invoke().toString());
        }
        ReactApplicationContext reactApplicationContext = (ReactApplicationContext) obj;
        if (b(reactApplicationContext)) {
            reactApplicationContext.removeLifecycleEventListener(this);
        } else {
            Log.w("ScreenDummyLayoutHelper", "[RNScreens] Failed to initialise dummy layout in onHostResume.");
        }
    }
}
