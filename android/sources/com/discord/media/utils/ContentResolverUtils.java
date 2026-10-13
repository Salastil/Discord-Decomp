package com.discord.media.utils;

import android.content.ContentResolver;
import android.database.Cursor;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.webkit.MimeTypeMap;
import com.reactnativecommunity.clipboard.ClipboardModule;
import java.io.File;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.x;
import org.jetbrains.annotations.NotNull;
import org.webrtc.MediaStreamTrack;

@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0011\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0005\bÀ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003JO\u0010\u0004\u001a\u0004\u0018\u00010\u0005*\u00020\u00062\u0006\u0010\u0007\u001a\u00020\b2\f\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u000b0\n2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000b2\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u0010\u0010\u001a\u0004\u0018\u00010\r¢\u0006\u0002\u0010\u0011J(\u0010\u0012\u001a\u00020\u0013*\u00020\u00062\u0006\u0010\u0014\u001a\u00020\b2\b\b\u0002\u0010\u0015\u001a\u00020\u000b2\n\b\u0002\u0010\u0016\u001a\u0004\u0018\u00010\u000bJ\u0012\u0010\u0017\u001a\u00020\u0018*\u00020\u00062\u0006\u0010\u0014\u001a\u00020\bJ\u0012\u0010\u0019\u001a\u00020\u0018*\u00020\u00062\u0006\u0010\u0014\u001a\u00020\bJ\u0012\u0010\u001a\u001a\u00020\u0018*\u00020\u00062\u0006\u0010\u0014\u001a\u00020\bJ\u0012\u0010\u001b\u001a\u00020\u0018*\u00020\u00062\u0006\u0010\u0014\u001a\u00020\bJ\u0012\u0010\u001c\u001a\u00020\u0018*\u00020\u00062\u0006\u0010\u0014\u001a\u00020\b¨\u0006\u001d"}, d2 = {"Lcom/discord/media/utils/ContentResolverUtils;", "", "<init>", "()V", "queryCompat", "Landroid/database/Cursor;", "Landroid/content/ContentResolver;", "queryUri", "Landroid/net/Uri;", "queryProjection", "", "", "queryLimit", "", "querySort", "querySelection", "queryOffset", "(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/Integer;)Landroid/database/Cursor;", "createTempFile", "Ljava/io/File;", "uri", "prefix", "extension", "isImage", "", "isPng", "isJpeg", "isHeif", "isVideo", "media_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ContentResolverUtils {

    @NotNull
    public static final ContentResolverUtils INSTANCE = new ContentResolverUtils();

    private ContentResolverUtils() {
    }

    public static /* synthetic */ File createTempFile$default(ContentResolverUtils contentResolverUtils, ContentResolver contentResolver, Uri uri, String str, String str2, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            str = "temp_";
        }
        if ((i5 & 4) != 0) {
            str2 = null;
        }
        return contentResolverUtils.createTempFile(contentResolver, uri, str, str2);
    }

    public static /* synthetic */ Cursor queryCompat$default(ContentResolverUtils contentResolverUtils, ContentResolver contentResolver, Uri uri, String[] strArr, int i5, String str, String str2, Integer num, int i6, Object obj) {
        if ((i6 & 16) != 0) {
            str2 = null;
        }
        if ((i6 & 32) != 0) {
            num = null;
        }
        return contentResolverUtils.queryCompat(contentResolver, uri, strArr, i5, str, str2, num);
    }

    @NotNull
    public final File createTempFile(@NotNull ContentResolver contentResolver, @NotNull Uri uri, @NotNull String prefix, String str) {
        Intrinsics.checkNotNullParameter(contentResolver, "<this>");
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(prefix, "prefix");
        if (str == null) {
            str = MimeTypeMap.getSingleton().getExtensionFromMimeType(contentResolver.getType(uri));
        }
        File createTempFile = File.createTempFile(prefix, "." + str);
        createTempFile.deleteOnExit();
        Intrinsics.checkNotNullExpressionValue(createTempFile, "also(...)");
        return createTempFile;
    }

    public final boolean isHeif(@NotNull ContentResolver contentResolver, @NotNull Uri uri) {
        Intrinsics.checkNotNullParameter(contentResolver, "<this>");
        Intrinsics.checkNotNullParameter(uri, "uri");
        return Intrinsics.areEqual(contentResolver.getType(uri), ClipboardModule.MIMETYPE_HEIF) || Intrinsics.areEqual(contentResolver.getType(uri), ClipboardModule.MIMETYPE_HEIC);
    }

    public final boolean isImage(@NotNull ContentResolver contentResolver, @NotNull Uri uri) {
        Intrinsics.checkNotNullParameter(contentResolver, "<this>");
        Intrinsics.checkNotNullParameter(uri, "uri");
        String type = contentResolver.getType(uri);
        return type != null && x.o(type, "image", false);
    }

    public final boolean isJpeg(@NotNull ContentResolver contentResolver, @NotNull Uri uri) {
        Intrinsics.checkNotNullParameter(contentResolver, "<this>");
        Intrinsics.checkNotNullParameter(uri, "uri");
        return Intrinsics.areEqual(contentResolver.getType(uri), ClipboardModule.MIMETYPE_JPEG) || Intrinsics.areEqual(contentResolver.getType(uri), ClipboardModule.MIMETYPE_JPG);
    }

    public final boolean isPng(@NotNull ContentResolver contentResolver, @NotNull Uri uri) {
        Intrinsics.checkNotNullParameter(contentResolver, "<this>");
        Intrinsics.checkNotNullParameter(uri, "uri");
        return Intrinsics.areEqual(contentResolver.getType(uri), ClipboardModule.MIMETYPE_PNG);
    }

    public final boolean isVideo(@NotNull ContentResolver contentResolver, @NotNull Uri uri) {
        Intrinsics.checkNotNullParameter(contentResolver, "<this>");
        Intrinsics.checkNotNullParameter(uri, "uri");
        String type = contentResolver.getType(uri);
        return type != null && x.o(type, MediaStreamTrack.VIDEO_TRACK_KIND, false);
    }

    public final Cursor queryCompat(@NotNull ContentResolver contentResolver, @NotNull Uri queryUri, @NotNull String[] queryProjection, int i5, @NotNull String querySort, String str, Integer num) {
        Intrinsics.checkNotNullParameter(contentResolver, "<this>");
        Intrinsics.checkNotNullParameter(queryUri, "queryUri");
        Intrinsics.checkNotNullParameter(queryProjection, "queryProjection");
        Intrinsics.checkNotNullParameter(querySort, "querySort");
        int i6 = Build.VERSION.SDK_INT;
        if (i6 > 29) {
            Bundle bundle = new Bundle();
            bundle.putInt("android:query-arg-limit", i5);
            bundle.putString("android:query-arg-sql-sort-order", querySort);
            if (str != null) {
                bundle.putString("android:query-arg-sql-selection", str);
            }
            if (num != null) {
                bundle.putInt("android:query-arg-offset", num.intValue());
            }
            Unit unit = Unit.a;
            return contentResolver.query(queryUri, queryProjection, bundle, null);
        }
        if (i6 < 26) {
            Uri.Builder encodedQuery = queryUri.buildUpon().encodedQuery("limit=" + i5);
            if (num != null) {
                encodedQuery.appendQueryParameter("offset", String.valueOf(num.intValue()));
            }
            return contentResolver.query(encodedQuery.build(), queryProjection, str, null, querySort);
        }
        return contentResolver.query(queryUri, queryProjection, str, null, querySort + " LIMIT " + i5 + " OFFSET " + (num != null ? num.intValue() : 0), null);
    }
}
