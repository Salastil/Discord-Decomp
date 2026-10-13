package i1;

import android.content.ContentProviderClient;
import android.content.ContentUris;
import android.content.Context;
import android.content.pm.PackageManager;
import android.content.pm.ProviderInfo;
import android.content.pm.Signature;
import android.content.res.Resources;
import android.database.Cursor;
import android.graphics.Typeface;
import android.net.Uri;
import android.os.Build;
import android.os.RemoteException;
import android.os.Trace;
import android.util.Log;
import androidx.collection.LruCache;
import com.facebook.react.common.assets.ReactFontManager;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.List;

/* loaded from: classes.dex */
public abstract class b {
    public static final LruCache a = new LruCache(2);

    /* renamed from: b, reason: collision with root package name */
    public static final com.facebook.react.uimanager.a f10437b = new com.facebook.react.uimanager.a(16);

    public static ad.f a(Context context, List list) {
        String str;
        Typeface c6;
        Trace.beginSection(com.facebook.imagepipeline.nativecode.c.Y("FontProvider.getFontFamilyResult"));
        try {
            ArrayList arrayList = new ArrayList();
            for (int i5 = 0; i5 < list.size(); i5++) {
                c cVar = (c) list.get(i5);
                if (Build.VERSION.SDK_INT < 31 || (c6 = b1.f.c((str = cVar.f10441e))) == null || b1.f.d(c6) == null) {
                    ProviderInfo b10 = b(context.getPackageManager(), cVar, context.getResources());
                    if (b10 == null) {
                        return new ad.f();
                    }
                    arrayList.add(c(context, cVar, b10.authority));
                } else {
                    arrayList.add(new g[]{new g(str, cVar.f10442f)});
                }
            }
            return new ad.f(arrayList);
        } finally {
            Trace.endSection();
        }
    }

    public static ProviderInfo b(PackageManager packageManager, c cVar, Resources resources) {
        com.facebook.react.uimanager.a aVar = f10437b;
        LruCache lruCache = a;
        Trace.beginSection(com.facebook.imagepipeline.nativecode.c.Y("FontProvider.getProvider"));
        try {
            List list = cVar.f10440d;
            String str = cVar.a;
            String str2 = cVar.f10438b;
            if (list == null) {
                list = a1.b.j(resources, 0);
            }
            a aVar2 = new a();
            aVar2.a = str;
            aVar2.f10435b = str2;
            aVar2.f10436c = list;
            ProviderInfo providerInfo = (ProviderInfo) lruCache.a(aVar2);
            if (providerInfo != null) {
                return providerInfo;
            }
            ProviderInfo resolveContentProvider = packageManager.resolveContentProvider(str, 0);
            if (resolveContentProvider == null) {
                throw new PackageManager.NameNotFoundException("No package found for authority: " + str);
            }
            if (!resolveContentProvider.packageName.equals(str2)) {
                throw new PackageManager.NameNotFoundException("Found content provider " + str + ", but package was not " + str2);
            }
            Signature[] signatureArr = packageManager.getPackageInfo(resolveContentProvider.packageName, 64).signatures;
            ArrayList arrayList = new ArrayList();
            for (Signature signature : signatureArr) {
                arrayList.add(signature.toByteArray());
            }
            Collections.sort(arrayList, aVar);
            for (int i5 = 0; i5 < list.size(); i5++) {
                ArrayList arrayList2 = new ArrayList((Collection) list.get(i5));
                Collections.sort(arrayList2, aVar);
                if (arrayList.size() == arrayList2.size()) {
                    for (int i6 = 0; i6 < arrayList.size(); i6++) {
                        if (!Arrays.equals((byte[]) arrayList.get(i6), (byte[]) arrayList2.get(i6))) {
                            break;
                        }
                    }
                    lruCache.b(aVar2, resolveContentProvider);
                    return resolveContentProvider;
                }
            }
            Trace.endSection();
            return null;
        } finally {
            Trace.endSection();
        }
    }

    public static g[] c(Context context, c cVar, String str) {
        Trace.beginSection(com.facebook.imagepipeline.nativecode.c.Y("FontProvider.query"));
        try {
            ArrayList arrayList = new ArrayList();
            Uri build = new Uri.Builder().scheme("content").authority(str).build();
            Uri build2 = new Uri.Builder().scheme("content").authority(str).appendPath("file").build();
            ContentProviderClient acquireUnstableContentProviderClient = context.getContentResolver().acquireUnstableContentProviderClient(build);
            Cursor cursor = null;
            try {
                String[] strArr = {"_id", "file_id", "font_ttc_index", "font_variation_settings", "font_weight", "font_italic", "result_code"};
                Trace.beginSection(com.facebook.imagepipeline.nativecode.c.Y("ContentQueryWrapper.query"));
                try {
                    String[] strArr2 = {cVar.f10439c};
                    if (acquireUnstableContentProviderClient != null) {
                        try {
                            cursor = acquireUnstableContentProviderClient.query(build, strArr, "query = ?", strArr2, null, null);
                        } catch (RemoteException e9) {
                            Log.w("FontsProvider", "Unable to query the content provider", e9);
                        }
                    }
                    Trace.endSection();
                    if (cursor != null && cursor.getCount() > 0) {
                        int columnIndex = cursor.getColumnIndex("result_code");
                        ArrayList arrayList2 = new ArrayList();
                        int columnIndex2 = cursor.getColumnIndex("_id");
                        int columnIndex3 = cursor.getColumnIndex("file_id");
                        int columnIndex4 = cursor.getColumnIndex("font_ttc_index");
                        int columnIndex5 = cursor.getColumnIndex("font_weight");
                        int columnIndex6 = cursor.getColumnIndex("font_italic");
                        while (cursor.moveToNext()) {
                            int i5 = columnIndex != -1 ? cursor.getInt(columnIndex) : 0;
                            arrayList2.add(new g(columnIndex3 == -1 ? ContentUris.withAppendedId(build, cursor.getLong(columnIndex2)) : ContentUris.withAppendedId(build2, cursor.getLong(columnIndex3)), columnIndex4 != -1 ? cursor.getInt(columnIndex4) : 0, columnIndex5 != -1 ? cursor.getInt(columnIndex5) : ReactFontManager.TypefaceStyle.NORMAL, columnIndex6 != -1 && cursor.getInt(columnIndex6) == 1, i5));
                        }
                        arrayList = arrayList2;
                    }
                    if (cursor != null) {
                        cursor.close();
                    }
                    if (acquireUnstableContentProviderClient != null) {
                        acquireUnstableContentProviderClient.close();
                    }
                    return (g[]) arrayList.toArray(new g[0]);
                } finally {
                }
            } catch (Throwable th2) {
                if (cursor != null) {
                    cursor.close();
                }
                if (acquireUnstableContentProviderClient != null) {
                    acquireUnstableContentProviderClient.close();
                }
                throw th2;
            }
        } finally {
        }
    }
}
