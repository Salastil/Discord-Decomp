package app.rive;

import a3.e;
import app.rive.core.CommandQueue;
import app.rive.core.StateMachineHandle;
import app.rive.core.ViewModelInstanceHandle;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.FlowCollector;
import lo.d;
import lo.h;
import org.jetbrains.annotations.NotNull;
import qr.u;
import u.l;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.RiveKt$Rive$3", f = "Rive.kt", l = {243}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nRive.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Rive.kt\napp/rive/RiveKt$Rive$3\n+ 2 RiveLog.kt\napp/rive/RiveLog\n*L\n1#1,521:1\n57#2:522\n57#2:523\n*S KotlinDebug\n*F\n+ 1 Rive.kt\napp/rive/RiveKt$Rive$3\n*L\n229#1:522\n233#1:523\n*E\n"})
/* loaded from: classes.dex */
public final class RiveKt$Rive$3 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ l $isSettled$delegate;
    final /* synthetic */ CommandQueue $riveWorker;
    final /* synthetic */ long $stateMachineHandle;
    final /* synthetic */ ViewModelInstance $viewModelInstance;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RiveKt$Rive$3(ViewModelInstance viewModelInstance, CommandQueue commandQueue, long j, l lVar, Continuation continuation) {
        super(2, continuation);
        this.$viewModelInstance = viewModelInstance;
        this.$riveWorker = commandQueue;
        this.$stateMachineHandle = j;
        this.$isSettled$delegate = lVar;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(Object obj, @NotNull Continuation continuation) {
        return new RiveKt$Rive$3(this.$viewModelInstance, this.$riveWorker, this.$stateMachineHandle, this.$isSettled$delegate, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            final ViewModelInstance viewModelInstance = this.$viewModelInstance;
            if (viewModelInstance == null) {
                final long j = this.$stateMachineHandle;
                RiveLog.INSTANCE.getLogger().d(ViewModelInstanceKt.VM_INSTANCE_TAG, new Function0<String>() { // from class: app.rive.RiveKt$Rive$3.1
                    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                    {
                        super(0);
                    }

                    @Override // kotlin.jvm.functions.Function0
                    @NotNull
                    public final String invoke() {
                        return e.k("No view model instance to bind for ", StateMachineHandle.m225toStringimpl(j));
                    }
                });
                return Unit.a;
            }
            RiveLog.INSTANCE.getLogger().d(ViewModelInstanceKt.VM_INSTANCE_TAG, new Function0<String>() { // from class: app.rive.RiveKt$Rive$3.2
                {
                    super(0);
                }

                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return e.k("Binding view model instance ", ViewModelInstanceHandle.m234toStringimpl(ViewModelInstance.this.getInstanceHandle()));
                }
            });
            this.$riveWorker.m125bindViewModelInstanceeiyHz8(this.$stateMachineHandle, this.$viewModelInstance.getInstanceHandle());
            RiveKt.Rive$lambda$2(this.$isSettled$delegate, false);
            u dirtyFlow = this.$viewModelInstance.getDirtyFlow();
            final long j5 = this.$stateMachineHandle;
            final l lVar = this.$isSettled$delegate;
            FlowCollector flowCollector = new FlowCollector() { // from class: app.rive.RiveKt$Rive$3.3
                @Override // kotlinx.coroutines.flow.FlowCollector
                public final Object emit(@NotNull Unit unit, @NotNull Continuation continuation) {
                    final long j7 = j5;
                    RiveLog.INSTANCE.getLogger().v(ViewModelInstanceKt.VM_INSTANCE_TAG, new Function0<String>() { // from class: app.rive.RiveKt.Rive.3.3.1
                        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                        {
                            super(0);
                        }

                        @Override // kotlin.jvm.functions.Function0
                        @NotNull
                        public final String invoke() {
                            return e.k("View model instance dirty, unsettling ", StateMachineHandle.m225toStringimpl(j7));
                        }
                    });
                    RiveKt.Rive$lambda$2(lVar, false);
                    return Unit.a;
                }
            };
            this.label = 1;
            if (dirtyFlow.collect(flowCollector, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            b.R(obj);
        }
        throw new fo.h();
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(@NotNull CoroutineScope coroutineScope, Continuation continuation) {
        return ((RiveKt$Rive$3) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
