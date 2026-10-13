package app.rive.runtime.kotlin.core;

import java.util.concurrent.locks.ReentrantLock;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0004\b\u0007\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\u0015\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0002\u0010\u0007J\u0011\u0010\b\u001a\u00020\u00022\u0006\u0010\t\u001a\u00020\u0004H\u0082 J\u0019\u0010\n\u001a\u00020\u000b2\u0006\u0010\t\u001a\u00020\u00042\u0006\u0010\f\u001a\u00020\u0002H\u0082 J\b\u0010\r\u001a\u00020\u0002H\u0014J\u0010\u0010\u000e\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\u0002H\u0014¨\u0006\u000f"}, d2 = {"Lapp/rive/runtime/kotlin/core/ViewModelEnumProperty;", "Lapp/rive/runtime/kotlin/core/ViewModelProperty;", "", "unsafeCppPointer", "", "fileLock", "Ljava/util/concurrent/locks/ReentrantLock;", "(JLjava/util/concurrent/locks/ReentrantLock;)V", "cppGetValue", "cppPointer", "cppSetValue", "", "value", "nativeGetValue", "nativeSetValue", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ViewModelEnumProperty extends ViewModelProperty<String> {
    public static final int $stable = 0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ViewModelEnumProperty(long j, @NotNull ReentrantLock fileLock) {
        super(j, fileLock);
        Intrinsics.checkNotNullParameter(fileLock, "fileLock");
    }

    private final native String cppGetValue(long cppPointer);

    private final native void cppSetValue(long cppPointer, String value);

    @Override // app.rive.runtime.kotlin.core.ViewModelProperty
    @NotNull
    public String nativeGetValue() {
        return cppGetValue(getCppPointer());
    }

    @Override // app.rive.runtime.kotlin.core.ViewModelProperty
    public void nativeSetValue(@NotNull String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        cppSetValue(getCppPointer(), value);
    }
}
