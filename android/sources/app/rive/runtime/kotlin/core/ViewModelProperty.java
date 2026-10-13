package app.rive.runtime.kotlin.core;

import com.facebook.react.devsupport.StackTraceHelper;
import java.util.concurrent.locks.ReentrantLock;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.flow.MutableStateFlow;
import org.jetbrains.annotations.NotNull;
import qr.a0;
import qr.c0;
import qr.t;
import qr.y;

@Metadata(d1 = {"\u0000P\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u000f\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\r\b'\u0018\u0000*\u0004\b\u0000\u0010\u00012\u00020\u0002B\u0017\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0005¢\u0006\u0004\b\u0007\u0010\bJ\u0018\u0010\u000b\u001a\u00020\n2\u0006\u0010\t\u001a\u00020\u0003H\u0082 ¢\u0006\u0004\b\u000b\u0010\fJ\u0018\u0010\u000e\u001a\u00020\r2\u0006\u0010\t\u001a\u00020\u0003H\u0086 ¢\u0006\u0004\b\u000e\u0010\u000fJ\u0018\u0010\u0010\u001a\u00020\n2\u0006\u0010\t\u001a\u00020\u0003H\u0087 ¢\u0006\u0004\b\u0010\u0010\fJ\u000f\u0010\u0012\u001a\u00020\u0011H\u0016¢\u0006\u0004\b\u0012\u0010\u0013J\u0017\u0010\u0018\u001a\u00020\u00152\u0006\u0010\u0014\u001a\u00020\u0005H\u0010¢\u0006\u0004\b\u0016\u0010\u0017J#\u0010\u001c\u001a\u00028\u0001\"\u0004\b\u0001\u0010\u00192\f\u0010\u001b\u001a\b\u0012\u0004\u0012\u00028\u00010\u001aH\u0004¢\u0006\u0004\b\u001c\u0010\u001dJ\u000f\u0010\u001e\u001a\u00028\u0000H$¢\u0006\u0004\b\u001e\u0010\u001fJ\u0017\u0010!\u001a\u00020\u00152\u0006\u0010 \u001a\u00028\u0000H$¢\u0006\u0004\b!\u0010\"J\u000f\u0010%\u001a\u00020\u0015H\u0010¢\u0006\u0004\b#\u0010$R\"\u0010\u0006\u001a\u00020\u00058\u0004@\u0004X\u0084\u000e¢\u0006\u0012\n\u0004\b\u0006\u0010&\u001a\u0004\b'\u0010(\"\u0004\b)\u0010\u0017R\u001a\u0010+\u001a\b\u0012\u0004\u0012\u00028\u00000*8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b+\u0010,R\u001d\u0010.\u001a\b\u0012\u0004\u0012\u00028\u00000-8\u0006¢\u0006\f\n\u0004\b.\u0010/\u001a\u0004\b0\u00101R\u0011\u00104\u001a\u00020\r8F¢\u0006\u0006\u001a\u0004\b2\u00103R$\u0010 \u001a\u00028\u00002\u0006\u0010 \u001a\u00028\u00008F@FX\u0086\u000e¢\u0006\f\u001a\u0004\b5\u0010\u001f\"\u0004\b6\u0010\"R\u0014\u00109\u001a\u00020\n8@X\u0080\u0004¢\u0006\u0006\u001a\u0004\b7\u00108¨\u0006:"}, d2 = {"Lapp/rive/runtime/kotlin/core/ViewModelProperty;", "T", "Lapp/rive/runtime/kotlin/core/NativeObject;", "", "unsafeCppPointer", "Ljava/util/concurrent/locks/ReentrantLock;", "fileLock", "<init>", "(JLjava/util/concurrent/locks/ReentrantLock;)V", "cppPointer", "", "cppFlushChanges", "(J)Z", "", "cppName", "(J)Ljava/lang/String;", "cppHasChanged", "", "release", "()I", "newFileLock", "", "updateFileLock$kotlin_release", "(Ljava/util/concurrent/locks/ReentrantLock;)V", "updateFileLock", "R", "Lkotlin/Function0;", "block", "withLock", "(Lkotlin/jvm/functions/Function0;)Ljava/lang/Object;", "nativeGetValue", "()Ljava/lang/Object;", "value", "nativeSetValue", "(Ljava/lang/Object;)V", "pollChanges$kotlin_release", "()V", "pollChanges", "Ljava/util/concurrent/locks/ReentrantLock;", "getFileLock", "()Ljava/util/concurrent/locks/ReentrantLock;", "setFileLock", "Lkotlinx/coroutines/flow/MutableStateFlow;", "_valueFlow", "Lkotlinx/coroutines/flow/MutableStateFlow;", "Lqr/a0;", "valueFlow", "Lqr/a0;", "getValueFlow", "()Lqr/a0;", "getName", "()Ljava/lang/String;", StackTraceHelper.NAME_KEY, "getValue", "setValue", "isSubscribed$kotlin_release", "()Z", "isSubscribed", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nViewModelInstance.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ViewModelInstance.kt\napp/rive/runtime/kotlin/core/ViewModelProperty\n+ 2 ViewModelInstance.kt\napp/rive/runtime/kotlin/core/ViewModelInstanceKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,1080:1\n42#2,9:1081\n88#2,2:1090\n51#2,6:1093\n90#2,13:1099\n58#2,2:1112\n119#2,7:1114\n1#3:1092\n*S KotlinDebug\n*F\n+ 1 ViewModelInstance.kt\napp/rive/runtime/kotlin/core/ViewModelProperty\n*L\n563#1:1081,9\n563#1:1090,2\n563#1:1093,6\n563#1:1099,13\n563#1:1112,2\n581#1:1114,7\n563#1:1092\n*E\n"})
/* loaded from: classes.dex */
public abstract class ViewModelProperty<T> extends NativeObject {
    public static final int $stable = 8;

    @NotNull
    private final MutableStateFlow _valueFlow;

    @NotNull
    private volatile ReentrantLock fileLock;

    @NotNull
    private final a0 valueFlow;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ViewModelProperty(long j, @NotNull ReentrantLock fileLock) {
        super(j);
        Intrinsics.checkNotNullParameter(fileLock, "fileLock");
        this.fileLock = fileLock;
        c0 b10 = y.b(withLock(new Function0<T>(this) { // from class: app.rive.runtime.kotlin.core.ViewModelProperty$_valueFlow$1
            final /* synthetic */ ViewModelProperty<T> this$0;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
                this.this$0 = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public final T invoke() {
                return this.this$0.nativeGetValue();
            }
        }));
        this._valueFlow = b10;
        this.valueFlow = new t(b10);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final native boolean cppFlushChanges(long cppPointer);

    public final native boolean cppHasChanged(long cppPointer);

    @NotNull
    public final native String cppName(long cppPointer);

    @NotNull
    public final ReentrantLock getFileLock() {
        return this.fileLock;
    }

    @NotNull
    public final String getName() {
        return cppName(getCppPointer());
    }

    public final T getValue() {
        return (T) this._valueFlow.getValue();
    }

    @NotNull
    public final a0 getValueFlow() {
        return this.valueFlow;
    }

    public final boolean isSubscribed$kotlin_release() {
        Integer valueOf;
        rr.a0 e9 = this._valueFlow.e();
        synchronized (e9) {
            Object[] objArr = e9.E;
            Intrinsics.checkNotNull(objArr);
            valueOf = Integer.valueOf(((Number) y.c(objArr, (e9.F + ((int) ((e9.o() + e9.H) - e9.F))) - 1)).intValue());
        }
        return valueOf.intValue() > 0;
    }

    public abstract T nativeGetValue();

    public abstract void nativeSetValue(T value);

    public void pollChanges$kotlin_release() {
        withLock(new Function0<Unit>(this) { // from class: app.rive.runtime.kotlin.core.ViewModelProperty$pollChanges$1
            final /* synthetic */ ViewModelProperty<T> this$0;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
                this.this$0 = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public /* bridge */ /* synthetic */ Object invoke() {
                m246invoke();
                return Unit.a;
            }

            /* renamed from: invoke, reason: collision with other method in class */
            public final void m246invoke() {
                MutableStateFlow mutableStateFlow;
                ViewModelProperty<T> viewModelProperty = this.this$0;
                if (viewModelProperty.cppHasChanged(viewModelProperty.getCppPointer())) {
                    mutableStateFlow = ((ViewModelProperty) this.this$0)._valueFlow;
                    mutableStateFlow.setValue(this.this$0.nativeGetValue());
                    ViewModelProperty<T> viewModelProperty2 = this.this$0;
                    viewModelProperty2.cppFlushChanges(viewModelProperty2.getCppPointer());
                }
            }
        });
    }

    @Override // app.rive.runtime.kotlin.core.NativeObject, app.rive.runtime.kotlin.core.RefCount
    public int release() {
        return ((Number) withLock(new Function0<Integer>(this) { // from class: app.rive.runtime.kotlin.core.ViewModelProperty$release$1
            final /* synthetic */ ViewModelProperty<T> this$0;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
                this.this$0 = this;
            }

            @Override // kotlin.jvm.functions.Function0
            @NotNull
            public final Integer invoke() {
                int release;
                release = super/*app.rive.runtime.kotlin.core.NativeObject*/.release();
                return Integer.valueOf(release);
            }
        })).intValue();
    }

    public final void setFileLock(@NotNull ReentrantLock reentrantLock) {
        Intrinsics.checkNotNullParameter(reentrantLock, "<set-?>");
        this.fileLock = reentrantLock;
    }

    public final void setValue(final T t5) {
        withLock(new Function0<Unit>(this) { // from class: app.rive.runtime.kotlin.core.ViewModelProperty$value$1
            final /* synthetic */ ViewModelProperty<T> this$0;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
                this.this$0 = this;
            }

            @Override // kotlin.jvm.functions.Function0
            public /* bridge */ /* synthetic */ Object invoke() {
                m247invoke();
                return Unit.a;
            }

            /* renamed from: invoke, reason: collision with other method in class */
            public final void m247invoke() {
                this.this$0.nativeSetValue(t5);
            }
        });
        this._valueFlow.setValue(t5);
    }

    public void updateFileLock$kotlin_release(@NotNull ReentrantLock newFileLock) {
        boolean z5;
        Intrinsics.checkNotNullParameter(newFileLock, "newFileLock");
        do {
            ReentrantLock reentrantLock = this.fileLock;
            if (reentrantLock == newFileLock) {
                return;
            }
            z5 = true;
            if (reentrantLock == newFileLock) {
                synchronized (reentrantLock) {
                    try {
                        if (this.fileLock == reentrantLock) {
                            setFileLock(newFileLock);
                            Unit unit = Unit.a;
                        } else {
                            z5 = false;
                        }
                        Unit unit2 = Unit.a;
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
            } else {
                int identityHashCode = System.identityHashCode(reentrantLock);
                int identityHashCode2 = System.identityHashCode(newFileLock);
                if (identityHashCode < identityHashCode2) {
                    synchronized (reentrantLock) {
                        synchronized (newFileLock) {
                            try {
                                if (this.fileLock == reentrantLock) {
                                    setFileLock(newFileLock);
                                    Unit unit3 = Unit.a;
                                } else {
                                    z5 = false;
                                }
                                Unit unit4 = Unit.a;
                            } catch (Throwable th3) {
                                throw th3;
                            }
                        }
                    }
                } else if (identityHashCode > identityHashCode2) {
                    synchronized (newFileLock) {
                        synchronized (reentrantLock) {
                            try {
                                if (this.fileLock == reentrantLock) {
                                    setFileLock(newFileLock);
                                    Unit unit5 = Unit.a;
                                } else {
                                    z5 = false;
                                }
                                Unit unit6 = Unit.a;
                            } catch (Throwable th4) {
                                throw th4;
                            }
                        }
                    }
                } else {
                    synchronized (ViewModelInstanceKt.fileLockUpdateTieLock) {
                        synchronized (reentrantLock) {
                            synchronized (newFileLock) {
                                try {
                                    if (this.fileLock == reentrantLock) {
                                        setFileLock(newFileLock);
                                        Unit unit7 = Unit.a;
                                    } else {
                                        z5 = false;
                                    }
                                    Unit unit8 = Unit.a;
                                } catch (Throwable th5) {
                                    throw th5;
                                }
                            }
                        }
                    }
                }
            }
        } while (!z5);
    }

    public final <R> R withLock(@NotNull Function0<? extends R> block) {
        Intrinsics.checkNotNullParameter(block, "block");
        while (true) {
            ReentrantLock fileLock = getFileLock();
            synchronized (fileLock) {
                if (getFileLock() == fileLock) {
                    return (R) block.invoke();
                }
                Unit unit = Unit.a;
            }
        }
    }
}
