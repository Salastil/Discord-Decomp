package pl;

import android.content.ContentResolver;
import android.database.Cursor;
import android.net.Uri;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import fo.q;
import fo.r;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import kotlin.Result;
import kotlin.Unit;
import kotlin.collections.c0;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;
import kr.n;

/* loaded from: classes3.dex */
public final class e {
    public final LinkedHashMap a;

    public e(LinkedHashMap uriMap) {
        Intrinsics.checkNotNullParameter(uriMap, "uriMap");
        this.a = uriMap;
    }

    public static Serializable a(Cursor cursor, String str, Class cls) {
        Serializable i5;
        int columnIndex = cursor.getColumnIndex(str);
        if (columnIndex == -1 || cursor.isNull(columnIndex)) {
            return null;
        }
        try {
            q qVar = Result.f13476e;
            i5 = Intrinsics.areEqual(cls, String.class) ? cursor.getString(columnIndex) : Intrinsics.areEqual(cls, Integer.TYPE) ? Integer.valueOf(cursor.getInt(columnIndex)) : Intrinsics.areEqual(cls, Long.TYPE) ? Long.valueOf(cursor.getLong(columnIndex)) : Intrinsics.areEqual(cls, Double.TYPE) ? Double.valueOf(cursor.getDouble(columnIndex)) : Intrinsics.areEqual(cls, Float.TYPE) ? Float.valueOf(cursor.getFloat(columnIndex)) : null;
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        if (i5 instanceof r) {
            return null;
        }
        return i5;
    }

    public static void b(ContentResolver contentResolver, b metadataBuilder, boolean z5) {
        Intrinsics.checkNotNullParameter(contentResolver, "contentResolver");
        Intrinsics.checkNotNullParameter(metadataBuilder, "metadataBuilder");
        try {
            c(contentResolver, metadataBuilder, z5);
        } catch (Exception e9) {
            Throwable[] suppressed = e9.getSuppressed();
            Intrinsics.checkNotNullExpressionValue(suppressed, "getSuppressed(...)");
            String A = x.A(suppressed, "; ", null, null, new n(10), 30);
            String simpleName = e9.getClass().getSimpleName();
            String message = e9.getMessage();
            if (message == null) {
                message = "no message";
            }
            metadataBuilder.f16433e = com.discord.chat.bridge.botuikit.a.j(a3.e.t("Could not read file metadata: ", simpleName, ": ", message, " (suppressed summary: ["), A, "])");
        }
    }

    public static void c(ContentResolver contentResolver, b bVar, boolean z5) {
        Uri uri = bVar.a;
        boolean z6 = true;
        boolean z7 = bVar.f16432d != null;
        ArrayList i5 = c0.i("_display_name", "_size");
        if (z5) {
            i5.add("flags");
        }
        if (!z7) {
            i5.add("mime_type");
        }
        Cursor query = contentResolver.query(uri, (String[]) i5.toArray(new String[0]), null, null, null);
        try {
            if (query == null) {
                bVar.f16433e = "Could not read file metadata because cursor was null. This is likely an issue with the underlying ContentProvider.";
                com.facebook.imagepipeline.nativecode.c.j(query, null);
                return;
            }
            if (!query.moveToFirst()) {
                int count = query.getCount();
                String[] columnNames = query.getColumnNames();
                Intrinsics.checkNotNullExpressionValue(columnNames, "getColumnNames(...)");
                bVar.f16433e = "Could not read file metadata because cursor could not move to the first result row. This is likely an issue with the underlying ContentProvider. Row count: " + count + ", columns: " + x.A(columnNames, ",", null, null, null, 62);
                query.close();
                return;
            }
            bVar.f16430b = (String) a(query, "_display_name", String.class);
            bVar.f16431c = (Long) a(query, "_size", Long.TYPE);
            if (!z7) {
                bVar.f16432d = (String) a(query, "mime_type", String.class);
            }
            if (z5) {
                Integer num = (Integer) a(query, "flags", Integer.TYPE);
                if (((num != null ? num.intValue() : 0) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0) {
                    bVar.f16437i = Boolean.valueOf(z6);
                    Unit unit = Unit.a;
                    query.close();
                }
            }
            z6 = false;
            bVar.f16437i = Boolean.valueOf(z6);
            Unit unit2 = Unit.a;
            query.close();
        } finally {
        }
    }
}
