package wm;

import android.content.Context;
import android.content.DialogInterface;
import android.content.res.TypedArray;
import android.util.TypedValue;
import android.view.ContextThemeWrapper;
import android.widget.FrameLayout;
import androidx.core.view.j0;
import androidx.core.view.s0;
import com.discord.R;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import java.util.WeakHashMap;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class n {
    public static final /* synthetic */ KProperty[] j = {com.discord.chat.bridge.botuikit.a.p(n.class, "eventEmitter", "getEventEmitter$react_native_screens_release()Lcom/swmansion/rnscreens/gamma/modals/formsheet/FormSheetDialogEventEmitter;", 0)};
    public e a;

    /* renamed from: b, reason: collision with root package name */
    public final f f19924b;

    /* renamed from: c, reason: collision with root package name */
    public final m f19925c;

    /* renamed from: d, reason: collision with root package name */
    public final FrameLayout f19926d;

    /* renamed from: e, reason: collision with root package name */
    public final eightbitlab.com.blurview.f f19927e;

    /* renamed from: f, reason: collision with root package name */
    public final d f19928f;

    /* renamed from: g, reason: collision with root package name */
    public final p0.a f19929g;

    /* renamed from: h, reason: collision with root package name */
    public final w f19930h;

    /* renamed from: i, reason: collision with root package name */
    public final an.b f19931i;

    public n(Context context, i contentView) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(contentView, "contentView");
        this.a = new e(false, m0.f13512d, false, 0, -1.0f, null);
        ContextThemeWrapper context2 = new ContextThemeWrapper(context, R.style.Theme_Material3_DayNight_NoActionBar);
        f fVar = new f(context2, contentView);
        this.f19924b = fVar;
        Intrinsics.checkNotNullParameter(context2, "context");
        TypedValue typedValue = new TypedValue();
        m dialog = new m(context2, context2.getTheme().resolveAttribute(R.attr.bottomSheetDialogTheme, typedValue, true) ? typedValue.resourceId : R.style.Theme_Design_Light_BottomSheetDialog);
        dialog.G = true;
        dialog.H = true;
        dialog.M = new com.swmansion.rnscreens.r(1, dialog);
        dialog.c().w(1);
        TypedArray obtainStyledAttributes = dialog.getContext().getTheme().obtainStyledAttributes(new int[]{R.attr.enableEdgeToEdge});
        dialog.K = obtainStyledAttributes.getBoolean(0, false);
        obtainStyledAttributes.recycle();
        TypedArray obtainStyledAttributes2 = dialog.getContext().getTheme().obtainStyledAttributes(new int[]{R.attr.enableEdgeToEdge});
        dialog.K = obtainStyledAttributes2.getBoolean(0, false);
        obtainStyledAttributes2.recycle();
        dialog.setContentView(fVar);
        dialog.setCanceledOnTouchOutside(false);
        this.f19925c = dialog;
        FrameLayout frameLayout = (FrameLayout) dialog.findViewById(R.id.design_bottom_sheet);
        this.f19926d = frameLayout;
        eightbitlab.com.blurview.f fVar2 = frameLayout != null ? new eightbitlab.com.blurview.f(frameLayout, new com.facebook.react.runtime.r(18, this)) : null;
        this.f19927e = fVar2;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(dialog, "dialog");
        hc.b bVar = new hc.b();
        bVar.a = dialog;
        vm.a aVar = new vm.a(context);
        aVar.setLayoutParams(new v0.d(-1, -1));
        bVar.f9625c = aVar;
        d dVar = new d(frameLayout);
        this.f19928f = dVar;
        p0.a aVar2 = new p0.a(dialog, fVar, frameLayout, fVar2);
        this.f19929g = aVar2;
        w wVar = new w(dialog, frameLayout, bVar, new h8.a(14, this));
        this.f19930h = wVar;
        this.f19931i = new an.b(5, this);
        if (frameLayout != null) {
            BottomSheetBehavior behavior = BottomSheetBehavior.D(frameLayout);
            Intrinsics.checkNotNullExpressionValue(behavior, "from(...)");
            Intrinsics.checkNotNullParameter(behavior, "behavior");
            behavior.w(new com.swmansion.rnscreens.r(3, bVar));
        }
        final k2.r rVar = wVar.j;
        ((m) rVar.f13142e).setOnCancelListener(new DialogInterface.OnCancelListener() { // from class: wm.t
            @Override // android.content.DialogInterface.OnCancelListener
            public final void onCancel(DialogInterface dialogInterface) {
                ((h8.a) k2.r.this.f13144v).invoke();
            }
        });
        ((vm.a) ((hc.b) rVar.f13143i).f9625c).setOnClickListener(new com.discord.chat.presentation.list.delegate.b(14, rVar));
        if (dVar.f19905h && frameLayout != null) {
            frameLayout.setClipToOutline(true);
        }
        bm.b bVar2 = new bm.b(4, aVar2);
        WeakHashMap weakHashMap = s0.a;
        j0.m(fVar, bVar2);
        if (frameLayout != null) {
            if (!frameLayout.isLaidOut() || frameLayout.isLayoutRequested()) {
                frameLayout.addOnLayoutChangeListener(new p());
            } else {
                s0.r(frameLayout, null);
            }
        }
        if (fVar2 != null) {
            ((BottomSheetBehavior) fVar2.f8129e).w((com.swmansion.rnscreens.r) fVar2.f8130f);
        }
    }
}
