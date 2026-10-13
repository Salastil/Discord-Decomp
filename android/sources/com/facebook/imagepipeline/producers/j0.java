package com.facebook.imagepipeline.producers;

import android.content.ContentResolver;
import android.content.res.AssetFileDescriptor;
import android.net.Uri;
import android.os.ParcelFileDescriptor;
import android.provider.ContactsContract;
import android.provider.MediaStore;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.imagepipeline.request.ImageRequest;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.util.concurrent.Executor;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class j0 extends o0 {

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ int f4756c;

    /* renamed from: d, reason: collision with root package name */
    public final ContentResolver f4757d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j0(Executor executor, e4.c pooledByteBufferFactory, ContentResolver contentResolver, int i5) {
        super(executor, pooledByteBufferFactory);
        this.f4756c = i5;
        switch (i5) {
            case 1:
                Intrinsics.checkNotNullParameter(executor, "executor");
                Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                Intrinsics.checkNotNullParameter(contentResolver, "contentResolver");
                super(executor, pooledByteBufferFactory);
                this.f4757d = contentResolver;
                break;
            default:
                Intrinsics.checkNotNullParameter(executor, "executor");
                Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
                Intrinsics.checkNotNullParameter(contentResolver, "contentResolver");
                this.f4757d = contentResolver;
                break;
        }
    }

    @Override // com.facebook.imagepipeline.producers.o0
    public final EncodedImage d(ImageRequest imageRequest) {
        EncodedImage encodedImage;
        ParcelFileDescriptor openFileDescriptor;
        InputStream createInputStream;
        int i5 = this.f4756c;
        ContentResolver contentResolver = this.f4757d;
        Intrinsics.checkNotNullParameter(imageRequest, "imageRequest");
        switch (i5) {
            case 0:
                Uri sourceUri = imageRequest.getSourceUri();
                Intrinsics.checkNotNullExpressionValue(sourceUri, "getSourceUri(...)");
                Uri uri = w8.a.a;
                if (sourceUri.getPath() == null || !"content".equals(w8.a.b(sourceUri)) || !"com.android.contacts".equals(sourceUri.getAuthority()) || sourceUri.getPath().startsWith(w8.a.a.getPath())) {
                    String uri2 = sourceUri.toString();
                    if (uri2.startsWith(MediaStore.Images.Media.EXTERNAL_CONTENT_URI.toString()) || uri2.startsWith(MediaStore.Images.Media.INTERNAL_CONTENT_URI.toString())) {
                        try {
                            openFileDescriptor = contentResolver.openFileDescriptor(sourceUri, "r");
                        } catch (FileNotFoundException unused) {
                            encodedImage = null;
                        }
                        if (openFileDescriptor == null) {
                            throw new IllegalStateException("Required value was null.");
                        }
                        EncodedImage c6 = c(new FileInputStream(openFileDescriptor.getFileDescriptor()), (int) openFileDescriptor.getStatSize());
                        Intrinsics.checkNotNullExpressionValue(c6, "getEncodedImage(...)");
                        openFileDescriptor.close();
                        encodedImage = c6;
                        if (encodedImage != null) {
                            return encodedImage;
                        }
                    }
                    InputStream openInputStream = contentResolver.openInputStream(sourceUri);
                    if (openInputStream != null) {
                        return c(openInputStream, -1);
                    }
                    throw new IllegalStateException("Required value was null.");
                }
                String uri3 = sourceUri.toString();
                Intrinsics.checkNotNullExpressionValue(uri3, "toString(...)");
                if (kotlin.text.x.h(uri3, "/photo", false)) {
                    createInputStream = contentResolver.openInputStream(sourceUri);
                } else {
                    String uri4 = sourceUri.toString();
                    Intrinsics.checkNotNullExpressionValue(uri4, "toString(...)");
                    if (kotlin.text.x.h(uri4, "/display_photo", false)) {
                        try {
                            AssetFileDescriptor openAssetFileDescriptor = contentResolver.openAssetFileDescriptor(sourceUri, "r");
                            if (openAssetFileDescriptor == null) {
                                throw new IllegalStateException("Required value was null.");
                            }
                            createInputStream = openAssetFileDescriptor.createInputStream();
                        } catch (IOException unused2) {
                            throw new IOException("Contact photo does not exist: " + sourceUri);
                        }
                    } else {
                        InputStream openContactPhotoInputStream = ContactsContract.Contacts.openContactPhotoInputStream(contentResolver, sourceUri);
                        if (openContactPhotoInputStream == null) {
                            throw new IOException("Contact photo does not exist: " + sourceUri);
                        }
                        createInputStream = openContactPhotoInputStream;
                    }
                }
                if (createInputStream != null) {
                    return c(createInputStream, -1);
                }
                throw new IllegalStateException("Required value was null.");
            default:
                InputStream openInputStream2 = contentResolver.openInputStream(imageRequest.getSourceUri());
                if (openInputStream2 == null) {
                    throw new IllegalStateException("ContentResolver returned null InputStream");
                }
                EncodedImage c8 = c(openInputStream2, -1);
                Intrinsics.checkNotNullExpressionValue(c8, "getEncodedImage(...)");
                return c8;
        }
    }

    @Override // com.facebook.imagepipeline.producers.o0
    public final String e() {
        switch (this.f4756c) {
            case 0:
                return "LocalContentUriFetchProducer";
            default:
                return "QualifiedResourceFetchProducer";
        }
    }
}
