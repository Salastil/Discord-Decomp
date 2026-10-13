package v1;

import java.util.LinkedHashMap;
import kotlin.Pair;
import kotlin.collections.u0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import rf.q;

/* loaded from: classes.dex */
public abstract class i {
    public static final LinkedHashMap a;

    static {
        Pair[] pairs = {new Pair(q.UNKNOWN_ERR, new p1.a(26)), new Pair(q.ABORT_ERR, new p1.a(0)), new Pair(q.ATTESTATION_NOT_PRIVATE_ERR, new p1.a(16)), new Pair(q.CONSTRAINT_ERR, new p1.a(1)), new Pair(q.DATA_ERR, new p1.a(3)), new Pair(q.INVALID_STATE_ERR, new p1.a(10)), new Pair(q.ENCODING_ERR, new p1.a(4)), new Pair(q.NETWORK_ERR, new p1.a(12)), new Pair(q.NOT_ALLOWED_ERR, new p1.a(14)), new Pair(q.NOT_SUPPORTED_ERR, new p1.a(17)), new Pair(q.SECURITY_ERR, new p1.a(22)), new Pair(q.TIMEOUT_ERR, new p1.a(24))};
        Intrinsics.checkNotNullParameter(pairs, "pairs");
        LinkedHashMap destination = new LinkedHashMap(u0.a(12));
        Intrinsics.checkNotNullParameter(pairs, "<this>");
        Intrinsics.checkNotNullParameter(destination, "destination");
        v0.k(destination, pairs);
        a = destination;
    }
}
