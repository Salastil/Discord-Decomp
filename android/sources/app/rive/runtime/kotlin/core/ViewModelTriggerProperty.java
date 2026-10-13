package app.rive.runtime.kotlin.core;

import java.util.concurrent.locks.ReentrantLock;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0007\b\u0007\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001:\u0001\u000fB\u0015\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0002\u0010\u0007J\u0011\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u0004H\u0082 J\b\u0010\u000b\u001a\u00020\u0002H\u0014J\u0010\u0010\f\u001a\u00020\t2\u0006\u0010\r\u001a\u00020\u0002H\u0014J\u0006\u0010\u000e\u001a\u00020\t¨\u0006\u0010"}, d2 = {"Lapp/rive/runtime/kotlin/core/ViewModelTriggerProperty;", "Lapp/rive/runtime/kotlin/core/ViewModelProperty;", "Lapp/rive/runtime/kotlin/core/ViewModelTriggerProperty$TriggerUnit;", "unsafeCppPointer", "", "fileLock", "Ljava/util/concurrent/locks/ReentrantLock;", "(JLjava/util/concurrent/locks/ReentrantLock;)V", "cppTrigger", "", "cppPointer", "nativeGetValue", "nativeSetValue", "value", "trigger", "TriggerUnit", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ViewModelTriggerProperty extends ViewModelProperty<TriggerUnit> {
    public static final int $stable = 0;

    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\b\u0007\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002¨\u0006\u0003"}, d2 = {"Lapp/rive/runtime/kotlin/core/ViewModelTriggerProperty$TriggerUnit;", "", "()V", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final class TriggerUnit {
        public static final int $stable = 0;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ViewModelTriggerProperty(long j, @NotNull ReentrantLock fileLock) {
        super(j, fileLock);
        Intrinsics.checkNotNullParameter(fileLock, "fileLock");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final native void cppTrigger(long cppPointer);

    @Override // app.rive.runtime.kotlin.core.ViewModelProperty
    public void nativeSetValue(@NotNull TriggerUnit value) {
        Intrinsics.checkNotNullParameter(value, "value");
    }

    public final void trigger() {
        withLock(new Function0<Unit>() { // from class: app.rive.runtime.kotlin.core.ViewModelTriggerProperty$trigger$1
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public /* bridge */ /* synthetic */ Object invoke() {
                m248invoke();
                return Unit.a;
            }

            /* renamed from: invoke, reason: collision with other method in class */
            public final void m248invoke() {
                ViewModelTriggerProperty viewModelTriggerProperty = ViewModelTriggerProperty.this;
                viewModelTriggerProperty.cppTrigger(viewModelTriggerProperty.getCppPointer());
            }
        });
    }

    /* JADX WARN: Can't rename method to resolve collision */
    @Override // app.rive.runtime.kotlin.core.ViewModelProperty
    @NotNull
    public TriggerUnit nativeGetValue() {
        return new TriggerUnit();
    }
}
