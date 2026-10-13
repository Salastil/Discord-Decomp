package fr;

import java.util.Arrays;
import java.util.List;
import kotlin.collections.c0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Regex;

/* loaded from: classes3.dex */
public abstract class r extends ta.a {

    /* renamed from: f, reason: collision with root package name */
    public static final List f9034f;

    static {
        hq.e eVar = s.f9042i;
        m mVar = m.f9027e;
        i iVar = new i(eVar, new e[]{mVar, new x(1)});
        i iVar2 = new i(s.j, new e[]{mVar, new x(2)}, h.f9015w);
        hq.e eVar2 = s.a;
        l lVar = l.f9025c;
        x xVar = new x(2);
        l lVar2 = l.f9024b;
        i iVar3 = new i(eVar2, new e[]{mVar, lVar, xVar, lVar2});
        i iVar4 = new i(s.f9035b, new e[]{mVar, lVar, new x(3), lVar2});
        i iVar5 = new i(s.f9036c, new e[]{mVar, lVar, new x(), lVar2});
        i iVar6 = new i(s.f9040g, new e[]{mVar});
        hq.e eVar3 = s.f9039f;
        y yVar = y.f9059e;
        t tVar = t.f9052c;
        i iVar7 = new i(eVar3, new e[]{mVar, yVar, lVar, tVar});
        hq.e eVar4 = s.f9041h;
        y yVar2 = y.f9058d;
        i iVar8 = new i(eVar4, new e[]{mVar, yVar2});
        i iVar9 = new i(s.k, new e[]{mVar, yVar2});
        i iVar10 = new i(s.f9043l, new e[]{mVar, yVar2, tVar});
        i iVar11 = new i(s.f9047p, new e[]{mVar, yVar, lVar});
        i iVar12 = new i(s.f9048q, new e[]{mVar, yVar, lVar});
        i iVar13 = new i(s.f9037d, new e[]{m.f9026d}, h.f9016x);
        i iVar14 = new i(s.f9038e, new e[]{mVar, u.f9053c, yVar, lVar});
        i iVar15 = new i(s.f9050s, new e[]{mVar, yVar, lVar});
        i iVar16 = new i(s.f9049r, new e[]{mVar, yVar2});
        i iVar17 = new i(c0.g(s.f9045n, s.f9046o), new e[]{mVar}, h.f9017y);
        i iVar18 = new i(s.f9051t, new e[]{mVar, v.f9054c, yVar, lVar});
        Regex regex = s.f9044m;
        e[] checks = {mVar, yVar2};
        h additionalChecks = h.f9013i;
        Intrinsics.checkNotNullParameter(regex, "regex");
        Intrinsics.checkNotNullParameter(checks, "checks");
        Intrinsics.checkNotNullParameter(additionalChecks, "additionalChecks");
        f9034f = c0.g(iVar, iVar2, iVar3, iVar4, iVar5, iVar6, iVar7, iVar8, iVar9, iVar10, iVar11, iVar12, iVar13, iVar14, iVar15, iVar16, iVar17, iVar18, new i(null, regex, null, additionalChecks, (e[]) Arrays.copyOf(checks, 2)));
    }
}
