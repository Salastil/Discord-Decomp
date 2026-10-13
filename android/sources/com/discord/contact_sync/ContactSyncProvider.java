package com.discord.contact_sync;

import a3.e;
import android.content.Context;
import android.content.res.AssetFileDescriptor;
import android.database.Cursor;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.net.Uri;
import android.provider.ContactsContract;
import android.util.Base64;
import java.io.ByteArrayOutputStream;
import java.io.FileDescriptor;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010$\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u001a\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0002J\u001a\u0010\n\u001a\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020\f0\u000b2\u0006\u0010\u0006\u001a\u00020\u0007J\u0018\u0010\r\u001a\u0004\u0018\u00010\t2\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\u000e\u001a\u00020\tJ\u0016\u0010\u000f\u001a\u0004\u0018\u00010\t*\u00020\u00102\u0006\u0010\u0011\u001a\u00020\tH\u0002J \u0010\u0012\u001a\u0004\u0018\u00010\t*\u00020\u00132\u0006\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\u0014\u001a\u00020\u0015H\u0002¨\u0006\u0016"}, d2 = {"Lcom/discord/contact_sync/ContactSyncProvider;", "", "<init>", "()V", "getContactName", "Lcom/discord/contact_sync/ContactNameEntry;", "context", "Landroid/content/Context;", "contactId", "", "getContactsMap", "", "Lcom/discord/contact_sync/ContactSyncBlobEntry;", "getImageForContactId", "deviceContactId", "getColumnString", "Landroid/database/Cursor;", "columnName", "asBase64BitmapString", "Landroid/net/Uri;", "quality", "", "contact_sync_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nContactSyncProvider.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ContactSyncProvider.kt\ncom/discord/contact_sync/ContactSyncProvider\n+ 2 Uri.kt\nandroidx/core/net/UriKt\n*L\n1#1,169:1\n29#2:170\n*S KotlinDebug\n*F\n+ 1 ContactSyncProvider.kt\ncom/discord/contact_sync/ContactSyncProvider\n*L\n142#1:170\n*E\n"})
/* loaded from: classes.dex */
public final class ContactSyncProvider {

    @NotNull
    public static final ContactSyncProvider INSTANCE = new ContactSyncProvider();

    private ContactSyncProvider() {
    }

    private final String asBase64BitmapString(Uri uri, Context context, int i5) {
        AssetFileDescriptor openAssetFileDescriptor = context.getContentResolver().openAssetFileDescriptor(uri, "r");
        String str = null;
        if (openAssetFileDescriptor == null) {
            return null;
        }
        try {
            FileDescriptor fileDescriptor = openAssetFileDescriptor.getFileDescriptor();
            if (fileDescriptor != null) {
                Bitmap decodeFileDescriptor = BitmapFactory.decodeFileDescriptor(fileDescriptor);
                ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                decodeFileDescriptor.compress(Bitmap.CompressFormat.JPEG, i5, byteArrayOutputStream);
                str = Base64.encodeToString(byteArrayOutputStream.toByteArray(), 0);
            }
            openAssetFileDescriptor.close();
            return str;
        } finally {
        }
    }

    public static /* synthetic */ String asBase64BitmapString$default(ContactSyncProvider contactSyncProvider, Uri uri, Context context, int i5, int i6, Object obj) {
        if ((i6 & 2) != 0) {
            i5 = 100;
        }
        return contactSyncProvider.asBase64BitmapString(uri, context, i5);
    }

    private final String getColumnString(Cursor cursor, String str) {
        return cursor.getString(cursor.getColumnIndexOrThrow(str));
    }

    private final ContactNameEntry getContactName(Context context, String contactId) {
        Cursor query = context.getContentResolver().query(ContactsContract.Data.CONTENT_URI, null, e.k("mimetype = ? AND contact_id = ", contactId), new String[]{"vnd.android.cursor.item/name"}, null);
        String str = null;
        if (query == null) {
            return null;
        }
        String str2 = null;
        while (query.moveToNext()) {
            try {
                str = getColumnString(query, "data2");
            } catch (Exception unused) {
            }
            try {
                str2 = getColumnString(query, "data3");
            } catch (Exception unused2) {
            }
            if ((str != null && str.length() != 0) || (str2 != null && str2.length() != 0)) {
                break;
            }
        }
        query.close();
        return new ContactNameEntry(str, str2);
    }

    @NotNull
    public final Map<String, ContactSyncBlobEntry> getContactsMap(@NotNull Context context) {
        String familyName;
        String givenName;
        Intrinsics.checkNotNullParameter(context, "context");
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        Cursor query = context.getContentResolver().query(ContactsContract.CommonDataKinds.Phone.CONTENT_URI, new String[]{"_id", "data4", "display_name", "photo_file_id", "contact_id"}, null, null, null);
        if (query == null) {
            return linkedHashMap;
        }
        while (query.moveToNext()) {
            String columnString = getColumnString(query, "display_name");
            String columnString2 = getColumnString(query, "data4");
            String columnString3 = getColumnString(query, "_id");
            String columnString4 = getColumnString(query, "contact_id");
            if (columnString3 != null && columnString4 != null) {
                ContactNameEntry contactName = getContactName(context, columnString4);
                String str = (contactName == null || (givenName = contactName.getGivenName()) == null) ? "" : givenName;
                String str2 = (contactName == null || (familyName = contactName.getFamilyName()) == null) ? "" : familyName;
                boolean z5 = getColumnString(query, "photo_file_id") != null;
                if (columnString2 != null) {
                }
            }
        }
        query.close();
        return linkedHashMap;
    }

    public final String getImageForContactId(@NotNull Context context, @NotNull String deviceContactId) {
        Uri parse;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(deviceContactId, "deviceContactId");
        Cursor query = context.getContentResolver().query(ContactsContract.CommonDataKinds.Phone.CONTENT_URI, new String[]{"_id", "photo_thumb_uri"}, "_id = ?", new String[]{deviceContactId}, null);
        String str = null;
        if (query == null) {
            return null;
        }
        try {
            if (query.getCount() > 0) {
                query.moveToFirst();
                ContactSyncProvider contactSyncProvider = INSTANCE;
                String columnString = contactSyncProvider.getColumnString(query, "photo_thumb_uri");
                if (columnString != null && (parse = Uri.parse(columnString)) != null) {
                    str = asBase64BitmapString$default(contactSyncProvider, parse, context, 0, 2, null);
                }
            }
            query.close();
            return str;
        } finally {
        }
    }
}
