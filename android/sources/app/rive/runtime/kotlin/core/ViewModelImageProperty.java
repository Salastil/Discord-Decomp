package app.rive.runtime.kotlin.core;

import java.util.concurrent.locks.ReentrantLock;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0000\b\u0007\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\u0015\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0002\u0010\u0007J\u0019\u0010\b\u001a\u00020\u00022\u0006\u0010\t\u001a\u00020\u00042\u0006\u0010\n\u001a\u00020\u0004H\u0082 J\b\u0010\u000b\u001a\u00020\u0002H\u0014J\u0015\u0010\f\u001a\u00020\u00022\u0006\u0010\n\u001a\u00020\u0002H\u0014¢\u0006\u0002\u0010\rJ\u0010\u0010\u000e\u001a\u00020\u00022\b\u0010\u000f\u001a\u0004\u0018\u00010\u0010¨\u0006\u0011"}, d2 = {"Lapp/rive/runtime/kotlin/core/ViewModelImageProperty;", "Lapp/rive/runtime/kotlin/core/ViewModelProperty;", "", "unsafeCppPointer", "", "fileLock", "Ljava/util/concurrent/locks/ReentrantLock;", "(JLjava/util/concurrent/locks/ReentrantLock;)V", "cppSetValue", "cppPointer", "value", "nativeGetValue", "nativeSetValue", "(Lkotlin/Unit;)V", "set", "image", "Lapp/rive/runtime/kotlin/core/RiveRenderImage;", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ViewModelImageProperty extends ViewModelProperty<Unit> {
    public static final int $stable = 0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ViewModelImageProperty(long j, @NotNull ReentrantLock fileLock) {
        super(j, fileLock);
        Intrinsics.checkNotNullParameter(fileLock, "fileLock");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final native void cppSetValue(long cppPointer, long value);

    /* renamed from: nativeGetValue, reason: avoid collision after fix types in other method */
    public void nativeGetValue2() {
    }

    @Override // app.rive.runtime.kotlin.core.ViewModelProperty
    public void nativeSetValue(@NotNull Unit value) {
        Intrinsics.checkNotNullParameter(value, "value");
    }

    public final void set(final RiveRenderImage image) {
        withLock(new Function0<Unit>() { // from class: app.rive.runtime.kotlin.core.ViewModelImageProperty$set$1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public /* bridge */ /* synthetic */ Object invoke() {
                m240invoke();
                return Unit.a;
            }

            /* renamed from: invoke, reason: collision with other method in class */
            public final void m240invoke() {
                ViewModelImageProperty viewModelImageProperty = ViewModelImageProperty.this;
                long cppPointer = viewModelImageProperty.getCppPointer();
                RiveRenderImage riveRenderImage = image;
                viewModelImageProperty.cppSetValue(cppPointer, riveRenderImage != null ? riveRenderImage.getCppPointer() : 0L);
            }
        });
    }

    @Override // app.rive.runtime.kotlin.core.ViewModelProperty
    public /* bridge */ /* synthetic */ Unit nativeGetValue() {
        nativeGetValue2();
        return Unit.a;
    }
}
