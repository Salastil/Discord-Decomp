package androidx.startup;

import ai.k;
import android.content.ComponentName;
import android.content.ContentProvider;
import android.content.ContentValues;
import android.content.Context;
import android.content.pm.PackageManager;
import android.database.Cursor;
import android.net.Uri;
import android.os.Trace;
import com.facebook.imagepipeline.nativecode.c;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import j3.a;

/* loaded from: classes.dex */
public class InitializationProvider extends ContentProvider {
    @Override // android.content.ContentProvider
    public final int delete(Uri uri, String str, String[] strArr) {
        throw new IllegalStateException("Not allowed.");
    }

    @Override // android.content.ContentProvider
    public final String getType(Uri uri) {
        throw new IllegalStateException("Not allowed.");
    }

    @Override // android.content.ContentProvider
    public final Uri insert(Uri uri, ContentValues contentValues) {
        throw new IllegalStateException("Not allowed.");
    }

    @Override // android.content.ContentProvider
    public final boolean onCreate() {
        Context context = getContext();
        if (context == null) {
            throw new k("Context cannot be null");
        }
        if (context.getApplicationContext() == null) {
            return true;
        }
        a c6 = a.c(context);
        Class<?> cls = getClass();
        Context context2 = c6.f12407c;
        try {
            try {
                Trace.beginSection(c.Y("Startup"));
                c6.a(context2.getPackageManager().getProviderInfo(new ComponentName(context2, cls), IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT).metaData);
                return true;
            } catch (PackageManager.NameNotFoundException e9) {
                throw new k((Throwable) e9);
            }
        } finally {
            Trace.endSection();
        }
    }

    @Override // android.content.ContentProvider
    public final Cursor query(Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        throw new IllegalStateException("Not allowed.");
    }

    @Override // android.content.ContentProvider
    public final int update(Uri uri, ContentValues contentValues, String str, String[] strArr) {
        throw new IllegalStateException("Not allowed.");
    }
}
