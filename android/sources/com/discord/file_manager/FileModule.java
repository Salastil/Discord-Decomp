package com.discord.file_manager;

import android.annotation.SuppressLint;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.media.MediaScannerConnection;
import android.net.Uri;
import android.os.Environment;
import com.discord.codegen.NativeFileModuleSpec;
import com.facebook.react.bridge.BaseJavaModule;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.util.HashMap;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import nr.g0;
import nr.x;
import org.jetbrains.annotations.NotNull;
import ur.d;
import ur.e;

@Metadata(d1 = {"\u0000P\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010%\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0010\u0006\n\u0000\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0014\u0010\r\u001a\u000e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\u000f0\u000eH\u0014J\u0018\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\n2\u0006\u0010\u0013\u001a\u00020\u0014H\u0016J0\u0010\u0015\u001a\u00020\u00112\u0006\u0010\u0016\u001a\u00020\n2\u0006\u0010\u0017\u001a\u00020\n2\u0006\u0010\u0018\u001a\u00020\n2\u0006\u0010\u0019\u001a\u00020\n2\u0006\u0010\u0013\u001a\u00020\u0014H\u0016J \u0010\u001a\u001a\u00020\u00112\u0006\u0010\u0017\u001a\u00020\n2\u0006\u0010\u0019\u001a\u00020\n2\u0006\u0010\u0013\u001a\u00020\u0014H\u0016J \u0010\u001b\u001a\u00020\u00112\u0006\u0010\u001c\u001a\u00020\n2\u0006\u0010\u0019\u001a\u00020\n2\u0006\u0010\u0013\u001a\u00020\u0014H\u0016J\u0010\u0010\u001d\u001a\u00020\u001e2\u0006\u0010\u001c\u001a\u00020\nH\u0007J\u0018\u0010\u001f\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\n2\u0006\u0010\u0013\u001a\u00020\u0014H\u0016J\u0018\u0010 \u001a\u00020\u00112\u0006\u0010\u0017\u001a\u00020\n2\u0006\u0010\u0013\u001a\u00020\u0014H\u0016J(\u0010!\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\n2\u0006\u0010\"\u001a\u00020\n2\u0006\u0010#\u001a\u00020\n2\u0006\u0010\u0013\u001a\u00020\u0014H\u0016J(\u0010$\u001a\u00020\u00112\u0006\u0010\u0016\u001a\u00020\n2\u0006\u0010%\u001a\u00020\n2\u0006\u0010&\u001a\u00020\n2\u0006\u0010\u0013\u001a\u00020\u0014H\u0016J \u0010'\u001a\u00020\u00112\u0006\u0010\u0016\u001a\u00020\n2\u0006\u0010\u0017\u001a\u00020\n2\u0006\u0010\u0013\u001a\u00020\u0014H\u0016J \u0010(\u001a\u00020\u00112\u0006\u0010\u0016\u001a\u00020\n2\u0006\u0010\u0017\u001a\u00020\n2\u0006\u0010\u0013\u001a\u00020\u0014H\u0016J(\u0010)\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\n2\u0006\u0010*\u001a\u00020\n2\u0006\u0010+\u001a\u00020,2\u0006\u0010\u0013\u001a\u00020\u0014H\u0016R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R:\u0010\b\u001a.\u0012\u0004\u0012\u00020\n\u0012\f\u0012\n \u000b*\u0004\u0018\u00010\n0\n0\tj\u0016\u0012\u0004\u0012\u00020\n\u0012\f\u0012\n \u000b*\u0004\u0018\u00010\n0\n`\fX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006-"}, d2 = {"Lcom/discord/file_manager/FileModule;", "Lcom/discord/codegen/NativeFileModuleSpec;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "ioScope", "Lkotlinx/coroutines/CoroutineScope;", "storageDirs", "Ljava/util/HashMap;", "", "kotlin.jvm.PlatformType", "Lkotlin/collections/HashMap;", "getTypedExportedConstants", "", "", "getVideoDimensions", "", "uri", BaseJavaModule.METHOD_TYPE_PROMISE, "Lcom/facebook/react/bridge/Promise;", "writeFile", "storageDir", "path", "data", "encoding", "readFile", "readAsset", "assetUri", "openRawResource", "Ljava/io/InputStream;", "getSize", "fileExists", "saveFileToGallery", "fileName", "fileType", "moveFile", "sourcePath", "destinationPath", "removeFile", "clearFolder", "getFileHash", "algorithm", "chunkSize", "", "file_manager_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nFileModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 FileModule.kt\ncom/discord/file_manager/FileModule\n+ 2 Uri.kt\nandroidx/core/net/UriKt\n*L\n1#1,325:1\n29#2:326\n*S KotlinDebug\n*F\n+ 1 FileModule.kt\ncom/discord/file_manager/FileModule\n*L\n191#1:326\n*E\n"})
/* loaded from: classes.dex */
public final class FileModule extends NativeFileModuleSpec {

    @NotNull
    private final CoroutineScope ioScope;

    @NotNull
    private final HashMap<String, String> storageDirs;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public FileModule(@NotNull ReactApplicationContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        e eVar = g0.a;
        this.ioScope = x.b(d.f19093i);
        this.storageDirs = v0.f(new Pair("cache", getReactApplicationContext().getCacheDir().getAbsolutePath()), new Pair("documents", getReactApplicationContext().getFilesDir().getAbsolutePath()));
    }

    @Override // com.discord.codegen.NativeFileModuleSpec
    public void clearFolder(@NotNull String storageDir, @NotNull String path, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(storageDir, "storageDir");
        Intrinsics.checkNotNullParameter(path, "path");
        Intrinsics.checkNotNullParameter(promise, "promise");
        x.t(this.ioScope, null, new FileModule$clearFolder$1(this, storageDir, promise, path, null), 3);
    }

    @Override // com.discord.codegen.NativeFileModuleSpec
    public void fileExists(@NotNull String path, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(path, "path");
        Intrinsics.checkNotNullParameter(promise, "promise");
        x.t(this.ioScope, null, new FileModule$fileExists$1(promise, path, null), 3);
    }

    @Override // com.discord.codegen.NativeFileModuleSpec
    public void getFileHash(@NotNull String uri, @NotNull String algorithm, double chunkSize, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(algorithm, "algorithm");
        Intrinsics.checkNotNullParameter(promise, "promise");
        x.t(this.ioScope, null, new FileModule$getFileHash$1(algorithm, this, uri, promise, chunkSize, null), 3);
    }

    @Override // com.discord.codegen.NativeFileModuleSpec
    public void getSize(@NotNull String uri, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(promise, "promise");
        x.t(this.ioScope, null, new FileModule$getSize$1(this, uri, promise, null), 3);
    }

    @Override // com.discord.codegen.NativeFileModuleSpec
    @NotNull
    public Map<String, Object> getTypedExportedConstants() {
        String str = this.storageDirs.get("documents");
        Intrinsics.checkNotNull(str);
        Pair pair = new Pair("DocumentsDirPath", str);
        String str2 = this.storageDirs.get("cache");
        Intrinsics.checkNotNull(str2);
        return v0.h(pair, new Pair("CacheDirPath", str2));
    }

    @Override // com.discord.codegen.NativeFileModuleSpec
    public void getVideoDimensions(@NotNull String uri, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(promise, "promise");
        promise.reject("E_UNSUPPORTED", "getVideoDimensions is only supported on iOS");
    }

    @Override // com.discord.codegen.NativeFileModuleSpec
    public void moveFile(@NotNull String storageDir, @NotNull String sourcePath, @NotNull String destinationPath, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(storageDir, "storageDir");
        Intrinsics.checkNotNullParameter(sourcePath, "sourcePath");
        Intrinsics.checkNotNullParameter(destinationPath, "destinationPath");
        Intrinsics.checkNotNullParameter(promise, "promise");
        x.t(this.ioScope, null, new FileModule$moveFile$1(this, storageDir, promise, sourcePath, destinationPath, null), 3);
    }

    @SuppressLint({"DiscouragedApi"})
    @NotNull
    public final InputStream openRawResource(@NotNull String assetUri) {
        Intrinsics.checkNotNullParameter(assetUri, "assetUri");
        InputStream openRawResource = getReactApplicationContext().getResources().openRawResource(getReactApplicationContext().getResources().getIdentifier(assetUri, "raw", getReactApplicationContext().getPackageName()));
        Intrinsics.checkNotNullExpressionValue(openRawResource, "openRawResource(...)");
        return openRawResource;
    }

    @Override // com.discord.codegen.NativeFileModuleSpec
    public void readAsset(@NotNull String assetUri, @NotNull String encoding, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(assetUri, "assetUri");
        Intrinsics.checkNotNullParameter(encoding, "encoding");
        Intrinsics.checkNotNullParameter(promise, "promise");
        x.t(this.ioScope, null, new FileModule$readAsset$1(assetUri, this, encoding, promise, null), 3);
    }

    @Override // com.discord.codegen.NativeFileModuleSpec
    public void readFile(@NotNull String path, @NotNull String encoding, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(path, "path");
        Intrinsics.checkNotNullParameter(encoding, "encoding");
        Intrinsics.checkNotNullParameter(promise, "promise");
        x.t(this.ioScope, null, new FileModule$readFile$1(path, encoding, promise, null), 3);
    }

    @Override // com.discord.codegen.NativeFileModuleSpec
    public void removeFile(@NotNull String storageDir, @NotNull String path, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(storageDir, "storageDir");
        Intrinsics.checkNotNullParameter(path, "path");
        Intrinsics.checkNotNullParameter(promise, "promise");
        x.t(this.ioScope, null, new FileModule$removeFile$1(this, storageDir, promise, path, null), 3);
    }

    @Override // com.discord.codegen.NativeFileModuleSpec
    public void saveFileToGallery(@NotNull String uri, @NotNull String fileName, @NotNull String fileType, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(fileName, "fileName");
        Intrinsics.checkNotNullParameter(fileType, "fileType");
        Intrinsics.checkNotNullParameter(promise, "promise");
        Bitmap decodeStream = BitmapFactory.decodeStream(getReactApplicationContext().getContentResolver().openInputStream(Uri.parse(uri)));
        if (decodeStream == null) {
            return;
        }
        File file = new File(Environment.getExternalStoragePublicDirectory(Environment.DIRECTORY_DOWNLOADS), fileName);
        try {
            FileOutputStream fileOutputStream = new FileOutputStream(file);
            if (Intrinsics.areEqual(fileType, "PNG")) {
                decodeStream.compress(Bitmap.CompressFormat.PNG, 100, fileOutputStream);
            } else if (Intrinsics.areEqual(fileType, "JPEG")) {
                decodeStream.compress(Bitmap.CompressFormat.JPEG, 100, fileOutputStream);
            }
            fileOutputStream.flush();
            fileOutputStream.close();
            MediaScannerConnection.scanFile(getReactApplicationContext(), new String[]{file.toString()}, new String[]{file.getName()}, null);
            promise.resolve(file.getAbsolutePath());
        } catch (Throwable th2) {
            promise.reject(th2);
        }
    }

    @Override // com.discord.codegen.NativeFileModuleSpec
    public void writeFile(@NotNull String storageDir, @NotNull String path, @NotNull String data, @NotNull String encoding, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(storageDir, "storageDir");
        Intrinsics.checkNotNullParameter(path, "path");
        Intrinsics.checkNotNullParameter(data, "data");
        Intrinsics.checkNotNullParameter(encoding, "encoding");
        Intrinsics.checkNotNullParameter(promise, "promise");
        x.t(this.ioScope, null, new FileModule$writeFile$1(this, storageDir, promise, path, encoding, data, null), 3);
    }
}
