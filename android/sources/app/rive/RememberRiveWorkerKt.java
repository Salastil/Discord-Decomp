package app.rive;

import a3.e;
import app.rive.core.CommandQueue;
import fo.q;
import fo.r;
import kotlin.Metadata;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;
import tn.g;
import u.b;
import u.c;
import u.l;

@Metadata(d1 = {"\u0000(\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0003\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\u001a'\u0010\u0005\u001a\u00060\u0003j\u0002`\u00042\b\b\u0002\u0010\u0001\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u0000H\u0007¢\u0006\u0004\b\u0005\u0010\u0006\u001a=\u0010\n\u001a\n\u0018\u00010\u0003j\u0004\u0018\u0001`\u00042\u0010\b\u0002\u0010\t\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\b0\u00072\b\b\u0002\u0010\u0001\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u0000H\u0007¢\u0006\u0004\b\n\u0010\u000b\"\u0014\u0010\r\u001a\u00020\f8\u0006X\u0086T¢\u0006\u0006\n\u0004\b\r\u0010\u000e¨\u0006\u000f"}, d2 = {"", "autoPoll", "tracingEnabled", "Lapp/rive/core/CommandQueue;", "Lapp/rive/core/RiveWorker;", "rememberRiveWorker", "(ZZLu/c;II)Lapp/rive/core/CommandQueue;", "Lu/l;", "", "errorState", "rememberRiveWorkerOrNull", "(Lu/l;ZZLu/c;II)Lapp/rive/core/CommandQueue;", "", "RIVE_WORKER_TAG", "Ljava/lang/String;", "kotlin_release"}, k = 2, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nrememberRiveWorker.kt\nKotlin\n*S Kotlin\n*F\n+ 1 rememberRiveWorker.kt\napp/rive/RememberRiveWorkerKt\n+ 2 Composer.kt\nandroidx/compose/runtime/ComposerKt\n+ 3 CompositionLocal.kt\nandroidx/compose/runtime/CompositionLocal\n+ 4 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 5 RiveLog.kt\napp/rive/RiveLog\n*L\n1#1,137:1\n1282#2,6:138\n1282#2,3:145\n1285#2,3:151\n75#3:144\n1#4:148\n69#5,2:149\n*S KotlinDebug\n*F\n+ 1 rememberRiveWorker.kt\napp/rive/RememberRiveWorkerKt\n*L\n50#1:138,6\n79#1:145,3\n79#1:151,3\n78#1:144\n85#1:149,2\n*E\n"})
/* loaded from: classes.dex */
public final class RememberRiveWorkerKt {

    @NotNull
    public static final String RIVE_WORKER_TAG = "Rive/Worker";

    @NotNull
    public static final CommandQueue rememberRiveWorker(boolean z5, boolean z6, c cVar, int i5, int i6) {
        cVar.d();
        if ((i6 & 1) != 0) {
            z5 = true;
        }
        boolean z7 = z5;
        if ((i6 & 2) != 0) {
            z6 = false;
        }
        boolean z8 = z6;
        cVar.d();
        Object a = cVar.a();
        if (a == b.a) {
            a = g.s(null);
            cVar.g();
        }
        l lVar = (l) a;
        cVar.k();
        int i10 = i5 << 3;
        CommandQueue rememberRiveWorkerOrNull = rememberRiveWorkerOrNull(lVar, z7, z8, cVar, (i10 & 112) | 6 | (i10 & 896), 0);
        if (rememberRiveWorkerOrNull == null) {
            throw new RiveInitializationException("Failed to create Rive worker", (Throwable) lVar.getValue());
        }
        cVar.k();
        return rememberRiveWorkerOrNull;
    }

    public static final CommandQueue rememberRiveWorkerOrNull(l lVar, boolean z5, boolean z6, c cVar, int i5, int i6) {
        Object i10;
        cVar.d();
        if ((i6 & 1) != 0) {
            lVar = g.s(null);
        }
        if ((i6 & 4) != 0) {
            z6 = false;
        }
        boolean z7 = z6;
        int i11 = r2.a.a;
        cVar.d();
        Object a = cVar.a();
        if (a == b.a) {
            try {
                q qVar = kotlin.Result.f13476e;
                i10 = new CommandQueue(null, null, z7, 3, null);
            } catch (Throwable th2) {
                q qVar2 = kotlin.Result.f13476e;
                i10 = ki.b.i(th2);
            }
            final Throwable a10 = kotlin.Result.a(i10);
            if (a10 != null) {
                if (lVar.getValue() == null) {
                    lVar.setValue(a10);
                }
                RiveLog.INSTANCE.getLogger().e(RIVE_WORKER_TAG, null, new Function0<String>() { // from class: app.rive.RememberRiveWorkerKt$rememberRiveWorkerOrNull$worker$1$2$1
                    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                    {
                        super(0);
                    }

                    @Override // kotlin.jvm.functions.Function0
                    @NotNull
                    public final String invoke() {
                        return e.k("Failed to create Rive worker: ", a10.getMessage());
                    }
                });
            }
            if (i10 instanceof r) {
                i10 = null;
            }
            a = (CommandQueue) i10;
            cVar.g();
        }
        cVar.k();
        new RememberRiveWorkerKt$rememberRiveWorkerOrNull$1((CommandQueue) a, z7, null);
        throw null;
    }
}
