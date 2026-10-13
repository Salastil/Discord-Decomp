package fm;

import android.widget.FrameLayout;
import androidx.lifecycle.u;
import app.rive.runtime.kotlin.RiveAnimationView;
import app.rive.runtime.kotlin.controllers.RiveFileController;
import app.rive.runtime.kotlin.core.Artboard;
import app.rive.runtime.kotlin.core.File;
import app.rive.runtime.kotlin.core.RefCount;
import app.rive.runtime.kotlin.core.SMIBoolean;
import app.rive.runtime.kotlin.core.SMIInput;
import app.rive.runtime.kotlin.core.SMINumber;
import app.rive.runtime.kotlin.core.SMITrigger;
import app.rive.runtime.kotlin.core.StateMachineInstance;
import app.rive.runtime.kotlin.core.ViewModel;
import app.rive.runtime.kotlin.core.ViewModelInstance;
import app.rive.runtime.kotlin.core.errors.ViewModelException;
import com.facebook.react.uimanager.ThemedReactContext;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import nr.o;
import nr.x;

/* loaded from: classes3.dex */
public final class m extends FrameLayout {

    /* renamed from: d, reason: collision with root package name */
    public e f8785d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f8786e;

    /* renamed from: i, reason: collision with root package name */
    public final o f8787i;

    /* renamed from: v, reason: collision with root package name */
    public String f8788v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f8789w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public m(ThemedReactContext context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        this.f8786e = new ArrayList();
        this.f8787i = x.a();
        Intrinsics.checkNotNullParameter(context, "context");
        e eVar = new e(context, null, 2, 0 == true ? 1 : 0);
        this.f8785d = eVar;
        addView(eVar);
    }

    private final String getActiveStateMachineName() {
        String str = this.f8788v;
        if (str != null) {
            return str;
        }
        throw new Error("View not configured. Could not find active state machine name");
    }

    private final String getSafeStateMachineName() {
        RiveFileController controller;
        e eVar = this.f8785d;
        List<StateMachineInstance> stateMachines = (eVar == null || (controller = eVar.getController()) == null) ? null : controller.getStateMachines();
        if (stateMachines == null || stateMachines.isEmpty()) {
            return null;
        }
        return ((StateMachineInstance) CollectionsKt.K(stateMachines)).getName();
    }

    public final void a(n config, boolean z5, boolean z6, boolean z7) {
        boolean z8;
        RiveFileController controller;
        RiveFileController controller2;
        RiveFileController controller3;
        RiveFileController controller4;
        RiveFileController controller5;
        e eVar;
        io.sentry.config.a bindData = config.f8796h;
        Intrinsics.checkNotNullParameter(config, "config");
        e eVar2 = this.f8785d;
        if (eVar2 != null) {
            Float f2 = config.f8795g;
            if (f2 == null) {
                f2 = Float.valueOf(getResources().getDisplayMetrics().density);
            }
            eVar2.setLayoutScaleFactor(f2);
        }
        boolean z10 = config.f8791c;
        if ((bindData instanceof d) || (bindData instanceof a)) {
            z8 = false;
        } else {
            if (!(bindData instanceof c) && !(bindData instanceof b)) {
                throw new fo.n();
            }
            z8 = true;
        }
        if (z6) {
            boolean z11 = z8 && z10;
            e eVar3 = this.f8785d;
            if (eVar3 != null) {
                RiveAnimationView.setRiveFile$default(eVar3, config.f8792d, config.a, null, config.f8790b, z11 ? false : z10, z11 ? false : z8, config.f8794f, config.f8793e, null, 260, null);
            }
            if (z11 && (eVar = this.f8785d) != null) {
                RiveAnimationView.play$default(eVar, null, null, false, 3, null);
            }
            this.f8788v = getSafeStateMachineName();
        } else {
            e eVar4 = this.f8785d;
            if (eVar4 != null) {
                eVar4.setAlignment(config.f8793e);
            }
            e eVar5 = this.f8785d;
            if (eVar5 != null) {
                eVar5.setFit(config.f8794f);
            }
        }
        if (z5 || z7 || z6) {
            Intrinsics.checkNotNullParameter(bindData, "bindData");
            e eVar6 = this.f8785d;
            File file = null;
            ViewModel viewModel = null;
            file = null;
            List<StateMachineInstance> stateMachines = (eVar6 == null || (controller5 = eVar6.getController()) == null) ? null : controller5.getStateMachines();
            if (stateMachines != null && !stateMachines.isEmpty()) {
                StateMachineInstance stateMachineInstance = (StateMachineInstance) CollectionsKt.K(stateMachines);
                if (bindData instanceof d) {
                    stateMachineInstance.setViewModelInstance(null);
                } else if (bindData instanceof a) {
                    e eVar7 = this.f8785d;
                    Artboard activeArtboard = (eVar7 == null || (controller4 = eVar7.getController()) == null) ? null : controller4.getActiveArtboard();
                    e eVar8 = this.f8785d;
                    File file2 = (eVar8 == null || (controller3 = eVar8.getController()) == null) ? null : controller3.getFile();
                    if (activeArtboard != null && file2 != null) {
                        try {
                            viewModel = file2.defaultViewModelForArtboard(activeArtboard);
                        } catch (ViewModelException unused) {
                        }
                        if (viewModel != null) {
                            stateMachineInstance.setViewModelInstance(viewModel.createDefaultInstance());
                        }
                    }
                } else if (bindData instanceof c) {
                    stateMachineInstance.setViewModelInstance(((c) bindData).a);
                } else {
                    if (!(bindData instanceof b)) {
                        throw new fo.n();
                    }
                    e eVar9 = this.f8785d;
                    Artboard activeArtboard2 = (eVar9 == null || (controller2 = eVar9.getController()) == null) ? null : controller2.getActiveArtboard();
                    e eVar10 = this.f8785d;
                    if (eVar10 != null && (controller = eVar10.getController()) != null) {
                        file = controller.getFile();
                    }
                    if (activeArtboard2 != null && file != null) {
                        stateMachineInstance.setViewModelInstance(file.defaultViewModelForArtboard(activeArtboard2).createInstanceFromName(((b) bindData).a));
                    }
                }
            }
        }
        this.f8787i.S(Boolean.TRUE);
    }

    public final SMIInput b(String str, String str2) {
        RiveFileController controller;
        RiveFileController controller2;
        List<StateMachineInstance> stateMachines;
        SMIInput sMIInput = null;
        try {
            if (str2 == null) {
                e eVar = this.f8785d;
                StateMachineInstance stateMachineInstance = (eVar == null || (controller2 = eVar.getController()) == null || (stateMachines = controller2.getStateMachines()) == null) ? null : stateMachines.get(0);
                if (stateMachineInstance != null) {
                    sMIInput = stateMachineInstance.input(str);
                }
            } else {
                e eVar2 = this.f8785d;
                Artboard activeArtboard = (eVar2 == null || (controller = eVar2.getController()) == null) ? null : controller.getActiveArtboard();
                if (activeArtboard != null) {
                    sMIInput = activeArtboard.input(str, str2);
                }
            }
            if (sMIInput != null) {
                return sMIInput;
            }
            throw new Exception("Could not find input (name: " + str + ", path: " + str2 + ")");
        } catch (Exception e9) {
            throw new Error(e9.getMessage());
        }
    }

    public final void c() {
        if (this.f8788v == null) {
            this.f8788v = getSafeStateMachineName();
        }
        e eVar = this.f8785d;
        if (eVar != null) {
            RiveAnimationView.play$default(eVar, null, null, false, 7, null);
        }
    }

    public final void d() {
        ArrayList arrayList = this.f8786e;
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            RiveFileController.RiveEventListener riveEventListener = (RiveFileController.RiveEventListener) it.next();
            e eVar = this.f8785d;
            if (eVar != null) {
                eVar.removeEventListener(riveEventListener);
            }
        }
        arrayList.clear();
    }

    public final void e(String name, boolean z5, String str) {
        String str2;
        RiveFileController controller;
        Intrinsics.checkNotNullParameter(name, "name");
        if (!(b(name, str) instanceof SMIBoolean)) {
            throw new Error("State machine input is not a boolean");
        }
        try {
            e eVar = this.f8785d;
            if (eVar == null || (controller = eVar.getController()) == null) {
                return;
            }
            controller.setBooleanState(getActiveStateMachineName(), name, z5, str);
        } catch (Exception unused) {
            String simpleName = Reflection.getOrCreateKotlinClass(i.class).getSimpleName();
            if (simpleName != null) {
                str2 = simpleName.toLowerCase(Locale.ROOT);
                Intrinsics.checkNotNullExpressionValue(str2, "toLowerCase(...)");
            } else {
                str2 = null;
            }
            throw new Error(s4.h.f("Could not handle ", str2, " state machine input"));
        }
    }

    public final void f(String name, double d6, String str) {
        String str2;
        RiveFileController controller;
        Intrinsics.checkNotNullParameter(name, "name");
        if (!(b(name, str) instanceof SMINumber)) {
            throw new Error("State machine input is not a number");
        }
        try {
            e eVar = this.f8785d;
            if (eVar == null || (controller = eVar.getController()) == null) {
                return;
            }
            controller.setNumberState(getActiveStateMachineName(), name, (float) d6, str);
        } catch (Exception unused) {
            String simpleName = Reflection.getOrCreateKotlinClass(j.class).getSimpleName();
            if (simpleName != null) {
                str2 = simpleName.toLowerCase(Locale.ROOT);
                Intrinsics.checkNotNullExpressionValue(str2, "toLowerCase(...)");
            } else {
                str2 = null;
            }
            throw new Error(s4.h.f("Could not handle ", str2, " state machine input"));
        }
    }

    public final void g(String name, String str) {
        String str2;
        RiveFileController controller;
        Intrinsics.checkNotNullParameter(name, "name");
        if (!(b(name, str) instanceof SMITrigger)) {
            throw new Error("State machine input is not a trigger");
        }
        try {
            e eVar = this.f8785d;
            if (eVar == null || (controller = eVar.getController()) == null) {
                return;
            }
            controller.fireState(getActiveStateMachineName(), name, str);
        } catch (Exception unused) {
            String simpleName = Reflection.getOrCreateKotlinClass(k.class).getSimpleName();
            if (simpleName != null) {
                str2 = simpleName.toLowerCase(Locale.ROOT);
                Intrinsics.checkNotNullExpressionValue(str2, "toLowerCase(...)");
            } else {
                str2 = null;
            }
            throw new Error(s4.h.f("Could not handle ", str2, " state machine input"));
        }
    }

    public final e getRiveAnimationView$rive_app_react_native_release() {
        return this.f8785d;
    }

    public final ViewModelInstance getViewModelInstance() {
        RiveFileController controller;
        e eVar = this.f8785d;
        List<StateMachineInstance> stateMachines = (eVar == null || (controller = eVar.getController()) == null) ? null : controller.getStateMachines();
        if (stateMachines == null || stateMachines.isEmpty()) {
            return null;
        }
        return ((StateMachineInstance) CollectionsKt.K(stateMachines)).getViewModelInstance();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        if (this.f8789w) {
            e eVar = this.f8785d;
            if (eVar != null) {
                eVar.getRendererAttributes().setResource(null);
                u lifecycleObserver = eVar.getLifecycleObserver();
                Intrinsics.checkNotNull(lifecycleObserver, "null cannot be cast to non-null type com.rive.ReactNativeRiveViewLifecycleObserver");
                f fVar = (f) lifecycleObserver;
                Iterator<T> it = fVar.getDependencies().iterator();
                while (it.hasNext()) {
                    ((RefCount) it.next()).release();
                }
                fVar.getDependencies().clear();
            }
            d();
        }
        super.onDetachedFromWindow();
    }

    public final void setRiveAnimationView$rive_app_react_native_release(e eVar) {
        this.f8785d = eVar;
    }
}
