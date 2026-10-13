package i4;

import android.database.Cursor;
import androidx.work.impl.WorkDatabase_Impl;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import e4.g;
import e4.i;
import e4.j;
import e4.l;
import e4.o;
import e4.r;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import ks.n;
import v3.p;

/* loaded from: classes.dex */
public abstract class b {
    public static final String a;

    static {
        String f2 = p.f("DiagnosticsWrkr");
        Intrinsics.checkNotNullExpressionValue(f2, "tagWithPrefix(\"DiagnosticsWrkr\")");
        a = f2;
    }

    public static final String a(l lVar, r rVar, i iVar, ArrayList arrayList) {
        StringBuilder sb2 = new StringBuilder("\n Id \t Class Name\t Job Id\t State\t Unique Name\t Tags\t");
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            o oVar = (o) it.next();
            j m5 = n.m(oVar);
            String str = oVar.a;
            g p3 = iVar.p(m5);
            Integer valueOf = p3 != null ? Integer.valueOf(p3.f7950c) : null;
            WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) lVar.f7959e;
            a3.o g6 = a3.o.g(1, "SELECT name FROM workname WHERE work_spec_id=?");
            if (str == null) {
                g6.S(1);
            } else {
                g6.n(1, str);
            }
            workDatabase_Impl.b();
            Cursor D = nt.a.D(workDatabase_Impl, g6);
            try {
                ArrayList arrayList2 = new ArrayList(D.getCount());
                while (D.moveToNext()) {
                    arrayList2.add(D.isNull(0) ? null : D.getString(0));
                }
                D.close();
                g6.i();
                String O = CollectionsKt.O(arrayList2, ",", null, null, null, 62);
                String O2 = CollectionsKt.O(rVar.n(str), ",", null, null, null, 62);
                StringBuilder m6 = com.discord.chat.bridge.botuikit.a.m(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE, str, "\t ");
                com.discord.chat.bridge.botuikit.a.r(valueOf, oVar.f7968c, "\t ", "\t ", m6);
                m6.append(oVar.f7967b.name());
                m6.append("\t ");
                m6.append(O);
                m6.append("\t ");
                m6.append(O2);
                m6.append('\t');
                sb2.append(m6.toString());
            } catch (Throwable th2) {
                D.close();
                g6.i();
                throw th2;
            }
        }
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "StringBuilder().apply(builderAction).toString()");
        return sb3;
    }
}
