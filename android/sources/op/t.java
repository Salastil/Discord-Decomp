package op;

import java.lang.reflect.Field;
import java.lang.reflect.Member;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class t extends v {
    public final Field a;

    public t(Field member) {
        Intrinsics.checkNotNullParameter(member, "member");
        this.a = member;
    }

    @Override // op.v
    public final Member b() {
        return this.a;
    }
}
