package pl;

import android.content.ContentResolver;
import android.content.res.AssetFileDescriptor;
import android.net.Uri;
import android.os.Build;
import android.os.FileUtils;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.util.RNLog;
import java.io.File;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.LinkedHashMap;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.x;

/* loaded from: classes3.dex */
public final class c {
    public final LinkedHashMap a;

    /* renamed from: b, reason: collision with root package name */
    public final com.discord.c f16438b;

    public c(LinkedHashMap uriMap) {
        Intrinsics.checkNotNullParameter(uriMap, "uriMap");
        this.a = uriMap;
        this.f16438b = new com.discord.c(27);
    }

    public static long a(InputStream inputStream, OutputStream outputStream) {
        Intrinsics.checkNotNullParameter(inputStream, "inputStream");
        Intrinsics.checkNotNullParameter(outputStream, "outputStream");
        try {
            try {
                long copy = Build.VERSION.SDK_INT >= 29 ? FileUtils.copy(inputStream, outputStream) : com.facebook.imagepipeline.nativecode.b.h(inputStream, outputStream, 8192);
                com.facebook.imagepipeline.nativecode.c.j(outputStream, null);
                com.facebook.imagepipeline.nativecode.c.j(inputStream, null);
                return copy;
            } finally {
            }
        } finally {
        }
    }

    public static final WritableMap b(c cVar, ReadableMap readableMap, ReactContext reactContext, File file) {
        String string = readableMap.getString("uri");
        if (string == null) {
            throw new IllegalArgumentException("URI is missing");
        }
        String string2 = readableMap.getString("fileName");
        if (string2 == null) {
            throw new IllegalArgumentException("fileName is missing");
        }
        String string3 = readableMap.getString("convertVirtualFileToType");
        Uri uri = (Uri) cVar.a.get(string);
        if (uri == null) {
            RNLog.w(reactContext, "keepLocalCopy: You're trying to copy a file \"" + string2 + "\" that wasn't picked with this module. This can lead to permission errors because the file reference is transient to your activity's current lifecycle. See https://developer.android.com/guide/components/intents-common#GetFile . Please use the result from the picker directly.");
        }
        if (uri == null) {
            uri = Uri.parse(string);
        }
        Intrinsics.checkNotNull(uri);
        File file2 = new File(file, string2);
        String canonicalPath = file2.getCanonicalPath();
        Intrinsics.checkNotNull(canonicalPath);
        String canonicalPath2 = file.getCanonicalPath();
        Intrinsics.checkNotNullExpressionValue(canonicalPath2, "getCanonicalPath(...)");
        if (!x.o(canonicalPath, canonicalPath2, false)) {
            throw new IllegalArgumentException("The copied file is attempting to write outside of the target directory.");
        }
        com.discord.permissions.b bVar = new com.discord.permissions.b(12, cVar, file2);
        if (string3 == null) {
            bVar.invoke(reactContext.getContentResolver().openInputStream(uri));
        } else {
            ContentResolver contentResolver = reactContext.getContentResolver();
            Intrinsics.checkNotNullExpressionValue(contentResolver, "getContentResolver(...)");
            AssetFileDescriptor openTypedAssetFileDescriptor = contentResolver.openTypedAssetFileDescriptor(uri, string3, null);
            bVar.invoke(openTypedAssetFileDescriptor != null ? openTypedAssetFileDescriptor.createInputStream() : null);
        }
        WritableMap createMap = Arguments.createMap();
        createMap.putString("status", "success");
        createMap.putString("localUri", Uri.fromFile(file2).toString());
        createMap.putString("sourceUri", string);
        return createMap;
    }

    public final b c(Uri uri, String str, ReactApplicationContext context) {
        Intrinsics.checkNotNullParameter(context, "context");
        if (uri == null) {
            throw new IllegalArgumentException("The source URI is null. Call saveDocument() before writeDocument()");
        }
        Uri uri2 = (Uri) this.a.get(str);
        if (uri2 == null) {
            RNLog.e(context, "writeDocument: You're trying to write from Uri \"" + str + "\" that wasn't picked with this module. Please use the result from saveDocument()");
            throw new IllegalArgumentException("The provided URI is not known");
        }
        b bVar = new b(uri2);
        ContentResolver contentResolver = context.getContentResolver();
        bVar.f16432d = contentResolver.getType(uri2);
        InputStream openInputStream = contentResolver.openInputStream(uri);
        if (openInputStream == null) {
            bVar.f16433e = "No input stream found for source file";
            return bVar;
        }
        OutputStream openOutputStream = contentResolver.openOutputStream(uri2);
        if (openOutputStream == null) {
            bVar.f16433e = "No output stream found for destination file";
            return bVar;
        }
        if (((Number) this.f16438b.invoke(openInputStream, openOutputStream)).longValue() == 0) {
            bVar.f16433e = "No data was copied to the destination file";
        }
        return bVar;
    }
}
