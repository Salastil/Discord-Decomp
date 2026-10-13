package w8;

import android.content.ContentResolver;
import android.database.Cursor;
import android.net.Uri;
import android.provider.ContactsContract;
import android.provider.DocumentsContract;
import android.provider.MediaStore;

/* loaded from: classes3.dex */
public abstract class a {
    public static final Uri a = Uri.withAppendedPath(ContactsContract.AUTHORITY_URI, "display_photo");

    public static String a(ContentResolver contentResolver, Uri uri) {
        Uri uri2;
        String str;
        String[] strArr;
        int columnIndexOrThrow;
        String type = contentResolver.getType(uri);
        String str2 = null;
        if (!"content".equals(b(uri))) {
            if ("file".equals(b(uri))) {
                return uri.getPath();
            }
            return null;
        }
        boolean z5 = type != null && type.startsWith("video/");
        if ("com.android.providers.media.documents".equals(uri.getAuthority())) {
            String documentId = DocumentsContract.getDocumentId(uri);
            documentId.getClass();
            Uri uri3 = z5 ? MediaStore.Video.Media.EXTERNAL_CONTENT_URI : MediaStore.Images.Media.EXTERNAL_CONTENT_URI;
            uri3.getClass();
            str = "_id=?";
            uri2 = uri3;
            strArr = new String[]{documentId.split(":")[1]};
        } else {
            uri2 = uri;
            str = null;
            strArr = null;
        }
        Cursor query = contentResolver.query(uri2, new String[]{"_data"}, str, strArr, null);
        if (query != null) {
            try {
                if (query.moveToFirst() && (columnIndexOrThrow = query.getColumnIndexOrThrow("_data")) != -1) {
                    str2 = query.getString(columnIndexOrThrow);
                }
            } finally {
                query.close();
            }
        }
        if (query != null) {
        }
        return str2;
    }

    public static String b(Uri uri) {
        if (uri == null) {
            return null;
        }
        return uri.getScheme();
    }

    public static boolean c(Uri uri) {
        String b10 = b(uri);
        return "https".equals(b10) || "http".equals(b10);
    }
}
