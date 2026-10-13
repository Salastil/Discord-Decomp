package com.discord.share.intent;

import android.content.ContentResolver;
import android.database.Cursor;
import android.net.Uri;
import com.facebook.imagepipeline.nativecode.c;
import fo.q;
import fo.r;
import ki.b;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u0012\n\u0000\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a\u0014\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0003\u001a\u00020\u0004H\u0000¨\u0006\u0005"}, d2 = {"getFileName", "", "Landroid/content/ContentResolver;", "uri", "Landroid/net/Uri;", "share_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class GetFileNameKt {
    @NotNull
    public static final String getFileName(@NotNull ContentResolver contentResolver, @NotNull Uri uri) {
        Object i5;
        Intrinsics.checkNotNullParameter(contentResolver, "<this>");
        Intrinsics.checkNotNullParameter(uri, "uri");
        String[] strArr = {"_display_name"};
        try {
            q qVar = Result.f13476e;
            i5 = contentResolver.query(uri, strArr, null, null, null);
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = b.i(th2);
        }
        if (i5 instanceof r) {
            i5 = null;
        }
        Cursor cursor = (Cursor) i5;
        if (cursor == null) {
            return "";
        }
        try {
            String string = cursor.moveToFirst() ? cursor.getString(0) : "";
            cursor.close();
            return string == null ? "" : string;
        } catch (Throwable th3) {
            try {
                throw th3;
            } catch (Throwable th4) {
                c.j(cursor, th3);
                throw th4;
            }
        }
    }
}
