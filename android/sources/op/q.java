package op;

import java.lang.reflect.Constructor;
import java.lang.reflect.Member;
import java.lang.reflect.TypeVariable;
import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class q extends v implements yp.e {
    public final Constructor a;

    public q(Constructor member) {
        Intrinsics.checkNotNullParameter(member, "member");
        this.a = member;
    }

    @Override // op.v
    public final Member b() {
        return this.a;
    }

    @Override // yp.e
    public final ArrayList getTypeParameters() {
        TypeVariable[] typeParameters = this.a.getTypeParameters();
        Intrinsics.checkNotNullExpressionValue(typeParameters, "getTypeParameters(...)");
        ArrayList arrayList = new ArrayList(typeParameters.length);
        for (TypeVariable typeVariable : typeParameters) {
            arrayList.add(new b0(typeVariable));
        }
        return arrayList;
    }
}
