package ua;

import androidx.recyclerview.widget.RecyclerView;
import com.facebook.imagepipeline.nativecode.NativeJpegTranscoderFactory;
import java.lang.reflect.InvocationTargetException;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d implements b {
    public final boolean a;

    public d(boolean z5) {
        this.a = z5;
    }

    @Override // ua.b
    public final a createImageTranscoder(aa.c imageFormat, boolean z5) {
        Intrinsics.checkNotNullParameter(imageFormat, "imageFormat");
        boolean z6 = this.a;
        try {
            Class cls = Integer.TYPE;
            Class cls2 = Boolean.TYPE;
            Object newInstance = NativeJpegTranscoderFactory.class.getConstructor(cls, cls2, cls2).newInstance(Integer.valueOf(RecyclerView.ItemAnimator.FLAG_MOVED), Boolean.FALSE, Boolean.valueOf(z6));
            Intrinsics.checkNotNull(newInstance, "null cannot be cast to non-null type com.facebook.imagepipeline.transcoder.ImageTranscoderFactory");
            a createImageTranscoder = ((b) newInstance).createImageTranscoder(imageFormat, z5);
            if (createImageTranscoder != null) {
                return createImageTranscoder;
            }
            e eVar = new e(z5);
            Intrinsics.checkNotNullExpressionValue(eVar, "createImageTranscoder(...)");
            return eVar;
        } catch (ClassNotFoundException e9) {
            throw new RuntimeException("Dependency ':native-imagetranscoder' is needed to use the default native image transcoder.", e9);
        } catch (IllegalAccessException e10) {
            throw new RuntimeException("Dependency ':native-imagetranscoder' is needed to use the default native image transcoder.", e10);
        } catch (IllegalArgumentException e11) {
            throw new RuntimeException("Dependency ':native-imagetranscoder' is needed to use the default native image transcoder.", e11);
        } catch (InstantiationException e12) {
            throw new RuntimeException("Dependency ':native-imagetranscoder' is needed to use the default native image transcoder.", e12);
        } catch (NoSuchMethodException e13) {
            throw new RuntimeException("Dependency ':native-imagetranscoder' is needed to use the default native image transcoder.", e13);
        } catch (SecurityException e14) {
            throw new RuntimeException("Dependency ':native-imagetranscoder' is needed to use the default native image transcoder.", e14);
        } catch (InvocationTargetException e15) {
            throw new RuntimeException("Dependency ':native-imagetranscoder' is needed to use the default native image transcoder.", e15);
        }
    }
}
