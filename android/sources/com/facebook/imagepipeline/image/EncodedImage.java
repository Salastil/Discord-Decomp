package com.facebook.imagepipeline.image;

import aa.b;
import aa.c;
import aa.d;
import android.graphics.ColorSpace;
import com.facebook.common.internal.Supplier;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.common.BytesRange;
import com.facebook.imageutils.BitmapUtil;
import com.facebook.imageutils.HeifExifUtil;
import com.facebook.imageutils.ImageMetaData;
import com.facebook.imageutils.JfifUtil;
import com.facebook.imageutils.WebpUtil;
import d9.a;
import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;
import kotlin.Pair;
import kotlin.jvm.internal.Intrinsics;
import o8.h;
import qa.q;
import r8.f;

/* loaded from: classes3.dex */
public class EncodedImage implements Closeable {
    public static final int DEFAULT_SAMPLE_SIZE = 1;
    public static final int UNKNOWN_HEIGHT = -1;
    public static final int UNKNOWN_ROTATION_ANGLE = -1;
    public static final int UNKNOWN_STREAM_SIZE = -1;
    public static final int UNKNOWN_WIDTH = -1;
    private static boolean sUseCachedMetadata;
    private BytesRange mBytesRange;
    private ColorSpace mColorSpace;
    private int mExifOrientation;
    private boolean mHasParsedMetadata;
    private int mHeight;
    private c mImageFormat;
    private final Supplier mInputStreamSupplier;
    private final CloseableReference mPooledByteBufferRef;
    private int mRotationAngle;
    private int mSampleSize;
    private String mSource;
    private int mStreamSize;
    private int mWidth;

    public EncodedImage(CloseableReference closeableReference) {
        this.mImageFormat = c.f275c;
        this.mRotationAngle = -1;
        this.mExifOrientation = 0;
        this.mWidth = -1;
        this.mHeight = -1;
        this.mSampleSize = 1;
        this.mStreamSize = -1;
        if (!CloseableReference.t(closeableReference)) {
            throw new IllegalArgumentException();
        }
        this.mPooledByteBufferRef = closeableReference.clone();
        this.mInputStreamSupplier = null;
    }

    public static EncodedImage cloneOrNull(EncodedImage encodedImage) {
        if (encodedImage != null) {
            return encodedImage.cloneOrNull();
        }
        return null;
    }

    public static void closeSafely(EncodedImage encodedImage) {
        if (encodedImage != null) {
            encodedImage.close();
        }
    }

    private void internalParseMetaData() {
        InputStream is2 = getInputStream();
        Object obj = d.f277d;
        Intrinsics.checkNotNullParameter(is2, "is");
        try {
            c imageFormat = a.q(is2);
            this.mImageFormat = imageFormat;
            c cVar = b.a;
            Intrinsics.checkNotNullParameter(imageFormat, "imageFormat");
            Intrinsics.checkNotNullParameter(imageFormat, "imageFormat");
            Pair<Integer, Integer> readWebPImageSize = ((imageFormat == b.f267f || imageFormat == b.f268g || imageFormat == b.f269h || imageFormat == b.f270i) || imageFormat == b.j) ? readWebPImageSize() : readImageMetaData().getDimensions();
            if (imageFormat == b.a && this.mRotationAngle == -1) {
                if (readWebPImageSize != null) {
                    int orientation = JfifUtil.getOrientation(getInputStream());
                    this.mExifOrientation = orientation;
                    this.mRotationAngle = JfifUtil.getAutoRotateAngleFromOrientation(orientation);
                    return;
                }
                return;
            }
            if (imageFormat == b.k && this.mRotationAngle == -1) {
                int orientation2 = HeifExifUtil.getOrientation(getInputStream());
                this.mExifOrientation = orientation2;
                this.mRotationAngle = JfifUtil.getAutoRotateAngleFromOrientation(orientation2);
            } else if (this.mRotationAngle == -1) {
                this.mRotationAngle = 0;
            }
        } catch (IOException e9) {
            h.h(e9);
            throw null;
        }
    }

    public static boolean isMetaDataAvailable(EncodedImage encodedImage) {
        return encodedImage.mRotationAngle >= 0 && encodedImage.mWidth >= 0 && encodedImage.mHeight >= 0;
    }

    private void parseMetadataIfNeeded() {
        if (this.mWidth < 0 || this.mHeight < 0) {
            parseMetaData();
        }
    }

    private ImageMetaData readImageMetaData() {
        InputStream inputStream;
        try {
            inputStream = getInputStream();
        } catch (Throwable th2) {
            th = th2;
            inputStream = null;
        }
        try {
            ImageMetaData decodeDimensionsAndColorSpace = BitmapUtil.decodeDimensionsAndColorSpace(inputStream);
            this.mColorSpace = decodeDimensionsAndColorSpace.getColorSpace();
            Pair<Integer, Integer> dimensions = decodeDimensionsAndColorSpace.getDimensions();
            if (dimensions != null) {
                this.mWidth = ((Integer) dimensions.f13474d).intValue();
                this.mHeight = ((Integer) dimensions.f13475e).intValue();
            }
            if (inputStream != null) {
                try {
                    inputStream.close();
                } catch (IOException unused) {
                }
            }
            return decodeDimensionsAndColorSpace;
        } catch (Throwable th3) {
            th = th3;
            if (inputStream != null) {
                try {
                    inputStream.close();
                } catch (IOException unused2) {
                }
            }
            throw th;
        }
    }

    private Pair<Integer, Integer> readWebPImageSize() {
        InputStream inputStream = getInputStream();
        if (inputStream == null) {
            return null;
        }
        Pair<Integer, Integer> size = WebpUtil.getSize(inputStream);
        if (size != null) {
            this.mWidth = ((Integer) size.f13474d).intValue();
            this.mHeight = ((Integer) size.f13475e).intValue();
        }
        return size;
    }

    public static void setUseCachedMetadata(boolean z5) {
        sUseCachedMetadata = z5;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        CloseableReference.l(this.mPooledByteBufferRef);
    }

    public void copyMetaDataFrom(EncodedImage encodedImage) {
        this.mImageFormat = encodedImage.getImageFormat();
        this.mWidth = encodedImage.getWidth();
        this.mHeight = encodedImage.getHeight();
        this.mRotationAngle = encodedImage.getRotationAngle();
        this.mExifOrientation = encodedImage.getExifOrientation();
        this.mSampleSize = encodedImage.getSampleSize();
        this.mStreamSize = encodedImage.getSize();
        this.mBytesRange = encodedImage.getBytesRange();
        this.mColorSpace = encodedImage.getColorSpace();
        this.mHasParsedMetadata = encodedImage.hasParsedMetaData();
    }

    public CloseableReference getByteBufferRef() {
        return CloseableReference.g(this.mPooledByteBufferRef);
    }

    public BytesRange getBytesRange() {
        return this.mBytesRange;
    }

    public ColorSpace getColorSpace() {
        parseMetadataIfNeeded();
        return this.mColorSpace;
    }

    public int getExifOrientation() {
        parseMetadataIfNeeded();
        return this.mExifOrientation;
    }

    public String getFirstBytesAsHexString(int i5) {
        CloseableReference byteBufferRef = getByteBufferRef();
        if (byteBufferRef == null) {
            return "";
        }
        int min = Math.min(getSize(), i5);
        byte[] bArr = new byte[min];
        try {
            ((q) byteBufferRef.q()).l(0, 0, min, bArr);
            byteBufferRef.close();
            StringBuilder sb2 = new StringBuilder(min * 2);
            for (int i6 = 0; i6 < min; i6++) {
                sb2.append(String.format("%02X", Byte.valueOf(bArr[i6])));
            }
            return sb2.toString();
        } catch (Throwable th2) {
            byteBufferRef.close();
            throw th2;
        }
    }

    public int getHeight() {
        parseMetadataIfNeeded();
        return this.mHeight;
    }

    public c getImageFormat() {
        parseMetadataIfNeeded();
        return this.mImageFormat;
    }

    public InputStream getInputStream() {
        Supplier supplier = this.mInputStreamSupplier;
        if (supplier != null) {
            return (InputStream) supplier.get();
        }
        CloseableReference g6 = CloseableReference.g(this.mPooledByteBufferRef);
        if (g6 == null) {
            return null;
        }
        try {
            return new f((q) g6.q());
        } finally {
            g6.close();
        }
    }

    public InputStream getInputStreamOrThrow() {
        InputStream inputStream = getInputStream();
        inputStream.getClass();
        return inputStream;
    }

    public int getRotationAngle() {
        parseMetadataIfNeeded();
        return this.mRotationAngle;
    }

    public int getSampleSize() {
        return this.mSampleSize;
    }

    public int getSize() {
        CloseableReference closeableReference = this.mPooledByteBufferRef;
        if (closeableReference == null) {
            return this.mStreamSize;
        }
        closeableReference.q();
        return ((q) this.mPooledByteBufferRef.q()).o();
    }

    public String getSource() {
        return this.mSource;
    }

    public synchronized s8.d getUnderlyingReferenceTestOnly() {
        s8.d dVar;
        CloseableReference closeableReference = this.mPooledByteBufferRef;
        if (closeableReference != null) {
            synchronized (closeableReference) {
                dVar = closeableReference.f4409e;
            }
        } else {
            dVar = null;
        }
        return dVar;
    }

    public int getWidth() {
        parseMetadataIfNeeded();
        return this.mWidth;
    }

    public boolean hasParsedMetaData() {
        return this.mHasParsedMetadata;
    }

    public boolean isCompleteAt(int i5) {
        c cVar = this.mImageFormat;
        if ((cVar != b.a && cVar != b.f271l) || this.mInputStreamSupplier != null) {
            return true;
        }
        this.mPooledByteBufferRef.getClass();
        q qVar = (q) this.mPooledByteBufferRef.q();
        return i5 >= 2 && qVar.i(i5 + (-2)) == -1 && qVar.i(i5 - 1) == -39;
    }

    public synchronized boolean isValid() {
        boolean z5;
        if (!CloseableReference.t(this.mPooledByteBufferRef)) {
            z5 = this.mInputStreamSupplier != null;
        }
        return z5;
    }

    public void parseMetaData() {
        if (!sUseCachedMetadata) {
            internalParseMetaData();
        } else {
            if (this.mHasParsedMetadata) {
                return;
            }
            internalParseMetaData();
            this.mHasParsedMetadata = true;
        }
    }

    public void setBytesRange(BytesRange bytesRange) {
        this.mBytesRange = bytesRange;
    }

    public void setExifOrientation(int i5) {
        this.mExifOrientation = i5;
    }

    public void setHeight(int i5) {
        this.mHeight = i5;
    }

    public void setImageFormat(c cVar) {
        this.mImageFormat = cVar;
    }

    public void setRotationAngle(int i5) {
        this.mRotationAngle = i5;
    }

    public void setSampleSize(int i5) {
        this.mSampleSize = i5;
    }

    public void setSource(String str) {
        this.mSource = str;
    }

    public void setStreamSize(int i5) {
        this.mStreamSize = i5;
    }

    public void setWidth(int i5) {
        this.mWidth = i5;
    }

    public static boolean isValid(EncodedImage encodedImage) {
        return encodedImage != null && encodedImage.isValid();
    }

    public EncodedImage cloneOrNull() {
        EncodedImage encodedImage;
        Supplier supplier = this.mInputStreamSupplier;
        if (supplier != null) {
            encodedImage = new EncodedImage(supplier, this.mStreamSize);
        } else {
            CloseableReference g6 = CloseableReference.g(this.mPooledByteBufferRef);
            if (g6 == null) {
                encodedImage = null;
            } else {
                try {
                    encodedImage = new EncodedImage(g6);
                } catch (Throwable th2) {
                    g6.close();
                    throw th2;
                }
            }
            CloseableReference.l(g6);
        }
        if (encodedImage != null) {
            encodedImage.copyMetaDataFrom(this);
        }
        return encodedImage;
    }

    public EncodedImage(Supplier supplier) {
        this.mImageFormat = c.f275c;
        this.mRotationAngle = -1;
        this.mExifOrientation = 0;
        this.mWidth = -1;
        this.mHeight = -1;
        this.mSampleSize = 1;
        this.mStreamSize = -1;
        supplier.getClass();
        this.mPooledByteBufferRef = null;
        this.mInputStreamSupplier = supplier;
    }

    public EncodedImage(Supplier supplier, int i5) {
        this(supplier);
        this.mStreamSize = i5;
    }
}
