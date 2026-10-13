package wm;

import android.content.Context;
import android.view.ViewGroup;
import com.facebook.react.uimanager.PointerEvents;
import com.facebook.react.uimanager.ReactPointerEventsView;
import com.facebook.react.uimanager.StateWrapper;
import com.facebook.react.uimanager.ThemedReactContext;
import java.util.List;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class q extends ViewGroup implements ReactPointerEventsView {
    public List E;
    public int F;
    public final i G;
    public final n H;
    public final PointerEvents I;

    /* renamed from: d, reason: collision with root package name */
    public final ThemedReactContext f19937d;

    /* renamed from: e, reason: collision with root package name */
    public final qm.b f19938e;

    /* renamed from: i, reason: collision with root package name */
    public r f19939i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f19940v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f19941w;

    /* renamed from: x, reason: collision with root package name */
    public float f19942x;

    /* renamed from: y, reason: collision with root package name */
    public Integer f19943y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public q(ThemedReactContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.f19937d = reactContext;
        this.f19938e = new qm.b(true);
        this.f19942x = -1.0f;
        this.E = m0.f13512d;
        Context context = getContext();
        Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
        i iVar = new i(context, new com.discord.chat.input.views.a(11, this));
        this.G = iVar;
        Context context2 = getContext();
        Intrinsics.checkNotNullExpressionValue(context2, "getContext(...)");
        n nVar = new n(context2, iVar);
        this.H = nVar;
        iVar.setContentSizeChangeDelegate$react_native_screens_release(nVar.f19929g);
        this.I = PointerEvents.NONE;
    }

    @NotNull
    public final List<Double> getDetents$react_native_screens_release() {
        return this.E;
    }

    @NotNull
    public final r getEventEmitter$react_native_screens_release() {
        r rVar = this.f19939i;
        if (rVar != null) {
            return rVar;
        }
        Intrinsics.throwUninitializedPropertyAccessException("eventEmitter");
        return null;
    }

    public final int getInitialDetentIndex$react_native_screens_release() {
        return this.F;
    }

    public final Integer getNativeContainerBackgroundColor$react_native_screens_release() {
        return this.f19943y;
    }

    @Override // com.facebook.react.uimanager.ReactPointerEventsView
    @NotNull
    public PointerEvents getPointerEvents() {
        return this.I;
    }

    public final float getPreferredCornerRadius$react_native_screens_release() {
        return this.f19942x;
    }

    public final boolean getPrefersGrabberVisible$react_native_screens_release() {
        return this.f19941w;
    }

    @NotNull
    public final ThemedReactContext getReactContext() {
        return this.f19937d;
    }

    public final int getReactSubviewCount$react_native_screens_release() {
        return this.G.getChildCount();
    }

    public final StateWrapper getStateWrapper$react_native_screens_release() {
        return this.f19938e.f16905b;
    }

    public final void setDetents$react_native_screens_release(@NotNull List<Double> list) {
        Intrinsics.checkNotNullParameter(list, "<set-?>");
        this.E = list;
    }

    public final void setEventEmitter$react_native_screens_release(@NotNull r rVar) {
        Intrinsics.checkNotNullParameter(rVar, "<set-?>");
        this.f19939i = rVar;
    }

    public final void setInitialDetentIndex$react_native_screens_release(int i5) {
        this.F = i5;
    }

    public final void setNativeContainerBackgroundColor$react_native_screens_release(Integer num) {
        this.f19943y = num;
    }

    public final void setOpen$react_native_screens_release(boolean z5) {
        this.f19940v = z5;
    }

    public final void setPreferredCornerRadius$react_native_screens_release(float f2) {
        this.f19942x = f2;
    }

    public final void setPrefersGrabberVisible$react_native_screens_release(boolean z5) {
        this.f19941w = z5;
    }

    public final void setStateWrapper$react_native_screens_release(StateWrapper stateWrapper) {
        this.f19938e.f16905b = stateWrapper;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
    }
}
