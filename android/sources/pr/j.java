package pr;

import com.discord.age_assurance.DigitalCredentialModule;
import kotlin.jvm.functions.Function3;
import kotlinx.coroutines.CancellableContinuation;

/* loaded from: classes3.dex */
public abstract class j {
    public static final o a = new o(-1, null, null, 0);

    /* renamed from: b, reason: collision with root package name */
    public static final int f16490b = sr.h.j(32, 12, "kotlinx.coroutines.bufferedChannel.segmentSize");

    /* renamed from: c, reason: collision with root package name */
    public static final int f16491c = sr.h.j(10000, 12, "kotlinx.coroutines.bufferedChannel.expandBufferCompletionWaitIterations");

    /* renamed from: d, reason: collision with root package name */
    public static final a5.h f16492d = new a5.h("BUFFERED");

    /* renamed from: e, reason: collision with root package name */
    public static final a5.h f16493e = new a5.h("SHOULD_BUFFER");

    /* renamed from: f, reason: collision with root package name */
    public static final a5.h f16494f = new a5.h("S_RESUMING_BY_RCV");

    /* renamed from: g, reason: collision with root package name */
    public static final a5.h f16495g = new a5.h("RESUMING_BY_EB");

    /* renamed from: h, reason: collision with root package name */
    public static final a5.h f16496h = new a5.h("POISONED");

    /* renamed from: i, reason: collision with root package name */
    public static final a5.h f16497i = new a5.h("DONE_RCV");
    public static final a5.h j = new a5.h("INTERRUPTED_SEND");
    public static final a5.h k = new a5.h("INTERRUPTED_RCV");

    /* renamed from: l, reason: collision with root package name */
    public static final a5.h f16498l = new a5.h("CHANNEL_CLOSED");

    /* renamed from: m, reason: collision with root package name */
    public static final a5.h f16499m = new a5.h("SUSPEND");

    /* renamed from: n, reason: collision with root package name */
    public static final a5.h f16500n = new a5.h("SUSPEND_NO_WAITER");

    /* renamed from: o, reason: collision with root package name */
    public static final a5.h f16501o = new a5.h(DigitalCredentialModule.CODE_FAILED);

    /* renamed from: p, reason: collision with root package name */
    public static final a5.h f16502p = new a5.h("NO_RECEIVE_RESULT");

    /* renamed from: q, reason: collision with root package name */
    public static final a5.h f16503q = new a5.h("CLOSE_HANDLER_CLOSED");

    /* renamed from: r, reason: collision with root package name */
    public static final a5.h f16504r = new a5.h("CLOSE_HANDLER_INVOKED");

    /* renamed from: s, reason: collision with root package name */
    public static final a5.h f16505s = new a5.h("NO_CLOSE_CAUSE");

    public static final boolean a(CancellableContinuation cancellableContinuation, Object obj, Function3 function3) {
        a5.h h6 = cancellableContinuation.h(obj, function3);
        if (h6 == null) {
            return false;
        }
        cancellableContinuation.s(h6);
        return true;
    }
}
