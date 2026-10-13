package r3;

import androidx.core.view.h;
import java.lang.reflect.InvocationTargetException;
import org.chromium.support_lib_boundary.WebViewProviderFactoryBoundaryInterface;

/* loaded from: classes.dex */
public abstract class e {
    public static final f a;

    /* JADX WARN: Multi-variable type inference failed */
    static {
        a aVar;
        try {
            WebViewProviderFactoryBoundaryInterface webViewProviderFactoryBoundaryInterface = (WebViewProviderFactoryBoundaryInterface) nt.a.e(WebViewProviderFactoryBoundaryInterface.class, h.e());
            g gVar = new g(0);
            gVar.f17126e = webViewProviderFactoryBoundaryInterface;
            aVar = gVar;
        } catch (ClassNotFoundException unused) {
            aVar = new a();
        } catch (IllegalAccessException e9) {
            throw new RuntimeException(e9);
        } catch (NoSuchMethodException e10) {
            throw new RuntimeException(e10);
        } catch (InvocationTargetException e11) {
            throw new RuntimeException(e11);
        }
        a = aVar;
    }
}
