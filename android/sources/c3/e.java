package c3;

import android.database.Cursor;
import com.facebook.react.devsupport.StackTraceHelper;
import go.i;
import go.n;
import java.util.AbstractSet;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import kotlin.collections.c1;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import tn.g;

/* loaded from: classes.dex */
public final class e {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final Map f3298b;

    /* renamed from: c, reason: collision with root package name */
    public final Set f3299c;

    /* renamed from: d, reason: collision with root package name */
    public final Set f3300d;

    public e(String name, Map columns, AbstractSet foreignKeys, AbstractSet abstractSet) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(columns, "columns");
        Intrinsics.checkNotNullParameter(foreignKeys, "foreignKeys");
        this.a = name;
        this.f3298b = columns;
        this.f3299c = foreignKeys;
        this.f3300d = abstractSet;
    }

    /* JADX WARN: Code restructure failed: missing block: B:70:0x01f5, code lost:
    
        r9 = kotlin.collections.c1.a(r10);
     */
    /* JADX WARN: Code restructure failed: missing block: B:71:0x01f9, code lost:
    
        r3.close();
     */
    /* JADX WARN: Finally extract failed */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final e a(h3.c database, String tableName) {
        Map b10;
        Intrinsics.checkNotNullParameter(database, "database");
        Intrinsics.checkNotNullParameter(tableName, "tableName");
        Intrinsics.checkNotNullParameter(database, "database");
        Intrinsics.checkNotNullParameter(tableName, "tableName");
        Cursor x5 = database.x("PRAGMA table_info(`" + tableName + "`)");
        try {
            if (x5.getColumnCount() <= 0) {
                b10 = v0.d();
                x5.close();
            } else {
                int columnIndex = x5.getColumnIndex(StackTraceHelper.NAME_KEY);
                int columnIndex2 = x5.getColumnIndex("type");
                int columnIndex3 = x5.getColumnIndex("notnull");
                int columnIndex4 = x5.getColumnIndex("pk");
                int columnIndex5 = x5.getColumnIndex("dflt_value");
                i builder = new i();
                while (x5.moveToNext()) {
                    String name = x5.getString(columnIndex);
                    String type = x5.getString(columnIndex2);
                    boolean z5 = x5.getInt(columnIndex3) != 0;
                    int i5 = x5.getInt(columnIndex4);
                    String string = x5.getString(columnIndex5);
                    Intrinsics.checkNotNullExpressionValue(name, "name");
                    Intrinsics.checkNotNullExpressionValue(type, "type");
                    builder.put(name, new a(name, type, string, i5, 2, z5));
                }
                Intrinsics.checkNotNullParameter(builder, "builder");
                b10 = builder.b();
                x5.close();
            }
            x5 = database.x("PRAGMA foreign_key_list(`" + tableName + "`)");
            try {
                int columnIndex6 = x5.getColumnIndex(StackTraceHelper.ID_KEY);
                int columnIndex7 = x5.getColumnIndex("seq");
                int columnIndex8 = x5.getColumnIndex("table");
                int columnIndex9 = x5.getColumnIndex("on_delete");
                int columnIndex10 = x5.getColumnIndex("on_update");
                List u5 = g.u(x5);
                x5.moveToPosition(-1);
                n nVar = new n();
                while (x5.moveToNext()) {
                    if (x5.getInt(columnIndex7) == 0) {
                        int i6 = x5.getInt(columnIndex6);
                        ArrayList arrayList = new ArrayList();
                        ArrayList arrayList2 = new ArrayList();
                        int i10 = columnIndex6;
                        ArrayList arrayList3 = new ArrayList();
                        for (Object obj : u5) {
                            int i11 = columnIndex7;
                            List list = u5;
                            if (((c) obj).f3291d == i6) {
                                arrayList3.add(obj);
                            }
                            columnIndex7 = i11;
                            u5 = list;
                        }
                        int i12 = columnIndex7;
                        List list2 = u5;
                        Iterator it = arrayList3.iterator();
                        while (it.hasNext()) {
                            c cVar = (c) it.next();
                            arrayList.add(cVar.f3293i);
                            arrayList2.add(cVar.f3294v);
                        }
                        String string2 = x5.getString(columnIndex8);
                        Intrinsics.checkNotNullExpressionValue(string2, "cursor.getString(tableColumnIndex)");
                        String string3 = x5.getString(columnIndex9);
                        Intrinsics.checkNotNullExpressionValue(string3, "cursor.getString(onDeleteColumnIndex)");
                        String string4 = x5.getString(columnIndex10);
                        Intrinsics.checkNotNullExpressionValue(string4, "cursor.getString(onUpdateColumnIndex)");
                        nVar.add(new b(arrayList, arrayList2, string2, string3, string4));
                        columnIndex6 = i10;
                        columnIndex7 = i12;
                        u5 = list2;
                    }
                }
                n a = c1.a(nVar);
                x5.close();
                x5 = database.x("PRAGMA index_list(`" + tableName + "`)");
                try {
                    int columnIndex11 = x5.getColumnIndex(StackTraceHelper.NAME_KEY);
                    int columnIndex12 = x5.getColumnIndex("origin");
                    int columnIndex13 = x5.getColumnIndex("unique");
                    n nVar2 = null;
                    if (columnIndex11 != -1 && columnIndex12 != -1 && columnIndex13 != -1) {
                        n nVar3 = new n();
                        while (true) {
                            if (!x5.moveToNext()) {
                                break;
                            }
                            if (Intrinsics.areEqual("c", x5.getString(columnIndex12))) {
                                String name2 = x5.getString(columnIndex11);
                                boolean z6 = x5.getInt(columnIndex13) == 1;
                                Intrinsics.checkNotNullExpressionValue(name2, "name");
                                d v5 = g.v(database, name2, z6);
                                if (v5 == null) {
                                    x5.close();
                                    break;
                                }
                                nVar3.add(v5);
                            }
                        }
                        return new e(tableName, b10, a, nVar2);
                    }
                    x5.close();
                    return new e(tableName, b10, a, nVar2);
                } finally {
                }
            } catch (Throwable th2) {
                try {
                    throw th2;
                } finally {
                }
            }
        } finally {
            try {
                throw th2;
            } finally {
            }
        }
    }

    public final boolean equals(Object obj) {
        Set set;
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof e)) {
            return false;
        }
        e eVar = (e) obj;
        if (!Intrinsics.areEqual(this.a, eVar.a) || !Intrinsics.areEqual(this.f3298b, eVar.f3298b) || !Intrinsics.areEqual(this.f3299c, eVar.f3299c)) {
            return false;
        }
        Set set2 = this.f3300d;
        if (set2 == null || (set = eVar.f3300d) == null) {
            return true;
        }
        return Intrinsics.areEqual(set2, set);
    }

    public final int hashCode() {
        return this.f3299c.hashCode() + ((this.f3298b.hashCode() + (this.a.hashCode() * 31)) * 31);
    }

    public final String toString() {
        return "TableInfo{name='" + this.a + "', columns=" + this.f3298b + ", foreignKeys=" + this.f3299c + ", indices=" + this.f3300d + '}';
    }
}
