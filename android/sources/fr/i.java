package fr;

import java.util.Arrays;
import java.util.Collection;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Regex;

/* loaded from: classes3.dex */
public final class i {
    public final hq.e a;

    /* renamed from: b, reason: collision with root package name */
    public final Regex f9019b;

    /* renamed from: c, reason: collision with root package name */
    public final Collection f9020c;

    /* renamed from: d, reason: collision with root package name */
    public final Function1 f9021d;

    /* renamed from: e, reason: collision with root package name */
    public final e[] f9022e;

    public i(hq.e eVar, Regex regex, Collection collection, Function1 function1, e... eVarArr) {
        this.a = eVar;
        this.f9019b = regex;
        this.f9020c = collection;
        this.f9021d = function1;
        this.f9022e = eVarArr;
    }

    public /* synthetic */ i(hq.e eVar, e[] eVarArr) {
        this(eVar, eVarArr, h.f9012e);
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public i(hq.e name, e[] checks, Function1 additionalChecks) {
        this(name, null, null, additionalChecks, (e[]) Arrays.copyOf(checks, checks.length));
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(checks, "checks");
        Intrinsics.checkNotNullParameter(additionalChecks, "additionalChecks");
    }

    public /* synthetic */ i(Collection collection, e[] eVarArr) {
        this(collection, eVarArr, h.f9014v);
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public i(Collection nameList, e[] checks, Function1 additionalChecks) {
        this(null, null, nameList, additionalChecks, (e[]) Arrays.copyOf(checks, checks.length));
        Intrinsics.checkNotNullParameter(nameList, "nameList");
        Intrinsics.checkNotNullParameter(checks, "checks");
        Intrinsics.checkNotNullParameter(additionalChecks, "additionalChecks");
    }
}
