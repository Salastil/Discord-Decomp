package kotlin.text;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class p {

    /* renamed from: e, reason: collision with root package name */
    public static final p f13587e;

    /* renamed from: i, reason: collision with root package name */
    public static final p f13588i;

    /* renamed from: v, reason: collision with root package name */
    public static final p f13589v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ p[] f13590w;

    /* renamed from: d, reason: collision with root package name */
    public final int f13591d;

    static {
        p pVar = new p("IGNORE_CASE", 0, 2, 0, 2, null);
        f13587e = pVar;
        p pVar2 = new p("MULTILINE", 1, 8, 0, 2, null);
        f13588i = pVar2;
        p pVar3 = new p("LITERAL", 2, 16, 0, 2, null);
        p pVar4 = new p("UNIX_LINES", 3, 1, 0, 2, null);
        p pVar5 = new p("COMMENTS", 4, 4, 0, 2, null);
        p pVar6 = new p("DOT_MATCHES_ALL", 5, 32, 0, 2, null);
        f13589v = pVar6;
        p[] pVarArr = {pVar, pVar2, pVar3, pVar4, pVar5, pVar6, new p("CANON_EQ", 6, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT, 0, 2, null)};
        f13590w = pVarArr;
        ki.b.p(pVarArr);
    }

    public p(String str, int i5, int i6, int i10, int i11, DefaultConstructorMarker defaultConstructorMarker) {
        this.f13591d = i6;
    }

    public static p valueOf(String str) {
        return (p) Enum.valueOf(p.class, str);
    }

    public static p[] values() {
        return (p[]) f13590w.clone();
    }
}
