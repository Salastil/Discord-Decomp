package app.rive;

import app.rive.core.CommandQueue;
import app.rive.core.ViewModelInstanceHandle;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.FunctionReferenceImpl;
import org.jetbrains.annotations.NotNull;

@Metadata(k = 3, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ViewModelInstance$getStringFlow$1 extends FunctionReferenceImpl implements Function3 {
    public ViewModelInstance$getStringFlow$1(Object obj) {
        super(3, obj, CommandQueue.class, "getStringProperty", "getStringProperty-iFQtAB8(JLjava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", 0);
    }

    @Override // kotlin.jvm.functions.Function3
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2, Object obj3) {
        return m61invokeiFQtAB8(((ViewModelInstanceHandle) obj).m235unboximpl(), (String) obj2, (Continuation) obj3);
    }

    /* renamed from: invoke-iFQtAB8, reason: not valid java name */
    public final Object m61invokeiFQtAB8(long j, @NotNull String str, @NotNull Continuation continuation) {
        return ((CommandQueue) this.receiver).m154getStringPropertyiFQtAB8(j, str, continuation);
    }
}
