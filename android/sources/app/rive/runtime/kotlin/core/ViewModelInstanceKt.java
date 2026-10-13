package app.rive.runtime.kotlin.core;

import java.util.concurrent.locks.ReentrantLock;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.InlineMarker;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\"\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\n\u001aR\u0010\u0002\u001a\u0004\u0018\u0001H\u0003\"\u0004\b\u0000\u0010\u00032\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u00052\u0006\u0010\u0007\u001a\u00020\u00062\u0014\b\u0004\u0010\b\u001a\u000e\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020\n0\t2\u000e\b\u0004\u0010\u000b\u001a\b\u0012\u0004\u0012\u0002H\u00030\u0005H\u0082\b¢\u0006\u0002\u0010\f\u001a2\u0010\r\u001a\u0002H\u000e\"\u0004\b\u0000\u0010\u000e2\u000e\b\u0004\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u00052\f\u0010\u000f\u001a\b\u0012\u0004\u0012\u0002H\u000e0\u0005H\u0082\b¢\u0006\u0002\u0010\u0010\u001a'\u0010\u0011\u001a\u00020\n2\u0006\u0010\u0012\u001a\u00020\u00062\u0006\u0010\u0013\u001a\u00020\u00062\f\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\n0\u0005H\u0082\b\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0014"}, d2 = {"fileLockUpdateTieLock", "", "updateFileLockWithRetry", "T", "currentFileLock", "Lkotlin/Function0;", "Ljava/util/concurrent/locks/ReentrantLock;", "newFileLock", "setFileLock", "Lkotlin/Function1;", "", "snapshotOfDependents", "(Lkotlin/jvm/functions/Function0;Ljava/util/concurrent/locks/ReentrantLock;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function0;)Ljava/lang/Object;", "withCurrentFileLock", "R", "block", "(Lkotlin/jvm/functions/Function0;Lkotlin/jvm/functions/Function0;)Ljava/lang/Object;", "withFileLocksInOrder", "firstLock", "secondLock", "kotlin_release"}, k = 2, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nViewModelInstance.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ViewModelInstance.kt\napp/rive/runtime/kotlin/core/ViewModelInstanceKt\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,1080:1\n88#1,2:1081\n90#1,13:1084\n1#2:1083\n1#2:1097\n*S KotlinDebug\n*F\n+ 1 ViewModelInstance.kt\napp/rive/runtime/kotlin/core/ViewModelInstanceKt\n*L\n50#1:1081,2\n50#1:1084,13\n50#1:1083\n*E\n"})
/* loaded from: classes.dex */
public final class ViewModelInstanceKt {

    @NotNull
    private static final Object fileLockUpdateTieLock = new Object();

    private static final <T> T updateFileLockWithRetry(Function0<? extends ReentrantLock> function0, ReentrantLock reentrantLock, Function1<? super ReentrantLock, Unit> function1, Function0<? extends T> function02) {
        T t5;
        boolean z5;
        do {
            ReentrantLock reentrantLock2 = (ReentrantLock) function0.invoke();
            t5 = null;
            if (reentrantLock2 == reentrantLock) {
                return null;
            }
            z5 = false;
            if (reentrantLock2 == reentrantLock) {
                synchronized (reentrantLock2) {
                    try {
                        if (function0.invoke() == reentrantLock2) {
                            function1.invoke(reentrantLock);
                            t5 = (T) function02.invoke();
                            z5 = true;
                        }
                        Unit unit = Unit.a;
                        InlineMarker.finallyStart(1);
                    } catch (Throwable th2) {
                        InlineMarker.finallyStart(1);
                        InlineMarker.finallyEnd(1);
                        throw th2;
                    }
                }
                InlineMarker.finallyEnd(1);
            } else {
                int identityHashCode = System.identityHashCode(reentrantLock2);
                int identityHashCode2 = System.identityHashCode(reentrantLock);
                if (identityHashCode < identityHashCode2) {
                    synchronized (reentrantLock2) {
                        try {
                            synchronized (reentrantLock) {
                                try {
                                    if (function0.invoke() == reentrantLock2) {
                                        function1.invoke(reentrantLock);
                                        t5 = (T) function02.invoke();
                                        z5 = true;
                                    }
                                    Unit unit2 = Unit.a;
                                    InlineMarker.finallyStart(1);
                                } finally {
                                }
                            }
                            InlineMarker.finallyEnd(1);
                            InlineMarker.finallyStart(1);
                        } catch (Throwable th3) {
                            InlineMarker.finallyStart(1);
                            InlineMarker.finallyEnd(1);
                            throw th3;
                        }
                    }
                    InlineMarker.finallyEnd(1);
                } else if (identityHashCode > identityHashCode2) {
                    synchronized (reentrantLock) {
                        try {
                            synchronized (reentrantLock2) {
                                try {
                                    if (function0.invoke() == reentrantLock2) {
                                        function1.invoke(reentrantLock);
                                        t5 = (T) function02.invoke();
                                        z5 = true;
                                    }
                                    Unit unit3 = Unit.a;
                                    InlineMarker.finallyStart(1);
                                } finally {
                                    InlineMarker.finallyStart(1);
                                    InlineMarker.finallyEnd(1);
                                }
                            }
                            InlineMarker.finallyEnd(1);
                            InlineMarker.finallyStart(1);
                        } catch (Throwable th4) {
                            InlineMarker.finallyStart(1);
                            InlineMarker.finallyEnd(1);
                            throw th4;
                        }
                    }
                    InlineMarker.finallyEnd(1);
                } else {
                    synchronized (fileLockUpdateTieLock) {
                        try {
                            synchronized (reentrantLock2) {
                                try {
                                    synchronized (reentrantLock) {
                                        try {
                                            if (function0.invoke() == reentrantLock2) {
                                                function1.invoke(reentrantLock);
                                                t5 = (T) function02.invoke();
                                                z5 = true;
                                            }
                                            Unit unit4 = Unit.a;
                                            InlineMarker.finallyStart(1);
                                        } finally {
                                            InlineMarker.finallyStart(1);
                                            InlineMarker.finallyEnd(1);
                                        }
                                    }
                                    InlineMarker.finallyEnd(1);
                                    InlineMarker.finallyStart(1);
                                } catch (Throwable th5) {
                                    InlineMarker.finallyStart(1);
                                    InlineMarker.finallyEnd(1);
                                    throw th5;
                                }
                            }
                            InlineMarker.finallyEnd(1);
                            InlineMarker.finallyStart(1);
                        } catch (Throwable th6) {
                            InlineMarker.finallyStart(1);
                            InlineMarker.finallyEnd(1);
                            throw th6;
                        }
                    }
                    InlineMarker.finallyEnd(1);
                }
            }
        } while (!z5);
        return t5;
    }

    private static final <R> R withCurrentFileLock(Function0<? extends ReentrantLock> function0, Function0<? extends R> function02) {
        while (true) {
            ReentrantLock reentrantLock = (ReentrantLock) function0.invoke();
            synchronized (reentrantLock) {
                try {
                    if (function0.invoke() == reentrantLock) {
                        R r5 = (R) function02.invoke();
                        InlineMarker.finallyStart(2);
                        InlineMarker.finallyEnd(2);
                        return r5;
                    }
                    Unit unit = Unit.a;
                    InlineMarker.finallyStart(1);
                } catch (Throwable th2) {
                    InlineMarker.finallyStart(1);
                    InlineMarker.finallyEnd(1);
                    throw th2;
                }
            }
            InlineMarker.finallyEnd(1);
        }
    }

    private static final void withFileLocksInOrder(ReentrantLock reentrantLock, ReentrantLock reentrantLock2, Function0<Unit> function0) {
        if (reentrantLock == reentrantLock2) {
            synchronized (reentrantLock) {
                try {
                    function0.invoke();
                    Unit unit = Unit.a;
                    InlineMarker.finallyStart(1);
                } catch (Throwable th2) {
                    InlineMarker.finallyStart(1);
                    InlineMarker.finallyEnd(1);
                    throw th2;
                }
            }
            InlineMarker.finallyEnd(1);
            return;
        }
        int identityHashCode = System.identityHashCode(reentrantLock);
        int identityHashCode2 = System.identityHashCode(reentrantLock2);
        if (identityHashCode < identityHashCode2) {
            synchronized (reentrantLock) {
                try {
                    synchronized (reentrantLock2) {
                        try {
                            function0.invoke();
                            Unit unit2 = Unit.a;
                            InlineMarker.finallyStart(1);
                        } finally {
                        }
                    }
                    InlineMarker.finallyEnd(1);
                    InlineMarker.finallyStart(1);
                } catch (Throwable th3) {
                    InlineMarker.finallyStart(1);
                    InlineMarker.finallyEnd(1);
                    throw th3;
                }
            }
            InlineMarker.finallyEnd(1);
            return;
        }
        if (identityHashCode > identityHashCode2) {
            synchronized (reentrantLock2) {
                try {
                    synchronized (reentrantLock) {
                        try {
                            function0.invoke();
                            Unit unit3 = Unit.a;
                            InlineMarker.finallyStart(1);
                        } finally {
                        }
                    }
                    InlineMarker.finallyEnd(1);
                    InlineMarker.finallyStart(1);
                } catch (Throwable th4) {
                    InlineMarker.finallyStart(1);
                    InlineMarker.finallyEnd(1);
                    throw th4;
                }
            }
            InlineMarker.finallyEnd(1);
            return;
        }
        synchronized (fileLockUpdateTieLock) {
            try {
                synchronized (reentrantLock) {
                    try {
                        synchronized (reentrantLock2) {
                            try {
                                function0.invoke();
                                Unit unit4 = Unit.a;
                                InlineMarker.finallyStart(1);
                            } finally {
                                InlineMarker.finallyStart(1);
                                InlineMarker.finallyEnd(1);
                            }
                        }
                        InlineMarker.finallyEnd(1);
                        InlineMarker.finallyStart(1);
                    } catch (Throwable th5) {
                        InlineMarker.finallyStart(1);
                        InlineMarker.finallyEnd(1);
                        throw th5;
                    }
                }
                InlineMarker.finallyEnd(1);
                InlineMarker.finallyStart(1);
            } catch (Throwable th6) {
                InlineMarker.finallyStart(1);
                InlineMarker.finallyEnd(1);
                throw th6;
            }
        }
        InlineMarker.finallyEnd(1);
    }
}
